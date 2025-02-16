#include <stdio.h>
#include <string.h>

#define MAX_PALAVRAS 50
#define MAX_TAMANHO 51

int main() {
    int N, MaiorPalavra, PrimeiroCaso = 1;
    char Palavras[MAX_PALAVRAS][MAX_TAMANHO];

    while (scanf("%d", &N) && N != 0) {
        MaiorPalavra = 0;

        for (int i = 0; i < N; i++) {
            scanf("%s", Palavras[i]);
            int tamanho = strlen(Palavras[i]);
            if (tamanho > MaiorPalavra) {
                MaiorPalavra = tamanho;
            }
        }

        if (!PrimeiroCaso) {
            printf("\n");
        }
        PrimeiroCaso = 0;

        for (int i = 0; i < N; i++) {
            printf("%*s\n", MaiorPalavra, Palavras[i]);
        }
    }

    return 0;
}
