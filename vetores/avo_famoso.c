#include <stdio.h>

int main() {
    int Rank[10000], Empate[10000];
    int ValorN, ValorM, ValorAtual;
    int MaiorAparicoes, SegundoMaiorAparicoes, Maior;
    int primeiro;

    scanf("%d %d", &ValorN, &ValorM);

    while (ValorM != 0 && ValorN != 0) {
        for (int i = 0; i < 10000; i++) {
            Rank[i] = 0;
            Empate[i] = 0;
        }
        MaiorAparicoes = 0;
        SegundoMaiorAparicoes = 0;

        for (int j = 0; j < ValorN; j++) {
            for (int k = 0; k < ValorM; k++) {
                scanf("%d", &ValorAtual);
                Rank[ValorAtual]++;
            }
        }

        for (int w = 0; w < 10000; w++) {
            if (Rank[w] > MaiorAparicoes) {
                MaiorAparicoes = Rank[w];
                Maior = w;
            }
        }

        Rank[Maior] = 0;

        for (int e = 0; e < 10000; e++) {
            if (Rank[e] > SegundoMaiorAparicoes) {
                SegundoMaiorAparicoes = Rank[e];
            }
        }

        for (int t = 0; t < 10000; t++) {
            if (Rank[t] == SegundoMaiorAparicoes) {
                printf("%d ", t);
            }
        }
        printf("\n");

        scanf("%d %d", &ValorN, &ValorM);
    }

    return 0;
}
