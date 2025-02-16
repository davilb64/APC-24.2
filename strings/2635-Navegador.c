#include <stdio.h>
#include <string.h>

#define MAX_WORDS 10000
#define MAX_LENGTH 101

int main() {
    int Palavras_Pesquisadas, Buscas, Tam, Sugest, MaxLength;
    
    scanf("%d", &Palavras_Pesquisadas);
    
    char Matriz_Pesquisadas[MAX_WORDS][MAX_LENGTH];
    
    for (int i = 0; i < Palavras_Pesquisadas; i++) {
        scanf("%s", Matriz_Pesquisadas[i]);
    }
    
    scanf("%d", &Buscas);
    
    char Matriz_Buscas[Buscas][MAX_LENGTH];
    
    for (int i = 0; i < Buscas; i++) {
        scanf("%s", Matriz_Buscas[i]);
    }
    
    for (int i = 0; i < Buscas; i++) {
        Sugest = 0;
        MaxLength = 0;

        for (int j = 0; j < Palavras_Pesquisadas; j++) {
            Tam = strlen(Matriz_Buscas[i]);
            int Match = 1;

            for (int k = 0; k < Tam; k++) {
                if (Matriz_Buscas[i][k] != Matriz_Pesquisadas[j][k]) {
                    Match = 0;
                    break;
                }
            }

            if (Match == 1) {
                Sugest++;
                int PalavraLength = strlen(Matriz_Pesquisadas[j]);
                if (PalavraLength > MaxLength) {
                    MaxLength = PalavraLength;
                }
            }
        }

        if (Sugest == 0) {
            printf("-1\n");
        } else {
            printf("%d %d\n", Sugest, MaxLength);
        }
    }

    return 0;
}
