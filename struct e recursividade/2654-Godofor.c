#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    while (N--) {
        char texto[201];
        fgets(texto, 201, stdin);

        int frequencia[26] = {0};

        for (int i = 0; texto[i] != '\0'; i++) {
            if (texto[i] >= 'A' && texto[i] <= 'Z') {
                frequencia[texto[i] - 'A']++;
            } else if (texto[i] >= 'a' && texto[i] <= 'z') { 
                frequencia[texto[i] - 'a']++;
            }
        }

        int maiorFrequencia = 0;
        for (int i = 0; i < 26; i++) {
            if (frequencia[i] > maiorFrequencia) {
                maiorFrequencia = frequencia[i];
            }
        }

        for (int i = 0; i < 26; i++) {
            if (frequencia[i] == maiorFrequencia) {
                printf("%c", 'a' + i);
            }
        }
        printf("\n");
    }

    return 0;
}