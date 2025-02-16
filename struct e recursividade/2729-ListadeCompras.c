#include <stdio.h>
#include <string.h>

#define MAX_ITENS 1000
#define MAX_TAM 21
#define MAX_LINHA 20000

int removeDuplicatas(char lista[MAX_ITENS][MAX_TAM], int n, int index) {
    if (index >= n - 1) return n;
    
    if (strcmp(lista[index], lista[index + 1]) == 0) {
        for (int i = index + 1; i < n - 1; i++) {
            strcpy(lista[i], lista[i + 1]);
        }
        return removeDuplicatas(lista, n - 1, index);
    }
    return removeDuplicatas(lista, n, index + 1);
}

void ordenarLista(char lista[MAX_ITENS][MAX_TAM], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(lista[i], lista[j]) > 0) {
                char temp[MAX_TAM];
                strcpy(temp, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], temp);
            }
        }
    }
}

void processarLista(char linha[MAX_LINHA]) {
    char lista[MAX_ITENS][MAX_TAM];
    int count = 0;
    char token[MAX_TAM];
    int pos = 0, len = strlen(linha);
    
    for (int i = 0; i <= len; i++) {
        if (linha[i] == ' ' || linha[i] == '\0') {
            token[pos] = '\0';
            strcpy(lista[count++], token);
            pos = 0;
        } else {
            token[pos++] = linha[i];
        }
    }

    ordenarLista(lista, count);

    int newSize = removeDuplicatas(lista, count, 0);

    for (int i = 0; i < newSize; i++) {
        if (i > 0) printf(" ");
        printf("%s", lista[i]);
    }
    printf("\n");
}

int main() {
    int N;
    char linha[MAX_LINHA];
    scanf("%d", &N);
    getchar();
    
    for (int i = 0; i < N; i++) {
        scanf(" %[^\n]", linha);
        processarLista(linha);
    }
    
    return 0;
}
