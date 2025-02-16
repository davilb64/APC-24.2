#include <stdio.h>
#include <math.h>

int main() {
    int ValorN = 1, Bolas_Globo = 1, Nao, Dif;

    while (ValorN != 0 && Bolas_Globo != 0) {
        scanf("%d %d", &ValorN, &Bolas_Globo);

        if (ValorN == 0 && Bolas_Globo == 0) {
            break;
        }

        int Numero_Bolas[Bolas_Globo];
        int Bolas[ValorN + 1];

        for (int j = 0; j <= ValorN; j++) {
            Bolas[j] = 0;
        }

        for (int l = 0; l < Bolas_Globo; l++) {
            scanf("%d", &Numero_Bolas[l]);
        }

        for (int i = 0; i < Bolas_Globo; i++) {
            for (int k = 0; k < Bolas_Globo; k++) {
                Dif = fabs(Numero_Bolas[i] - Numero_Bolas[k]);
                if (Dif <= ValorN) {
                    Bolas[Dif] = 1;
                }
            }
        }

        Nao = 0;
        for (int e = 0; e <= ValorN; e++) {
            if (Bolas[e] == 0) {
                Nao++;
            }
        }

        if (Nao > 0) {
            printf("N\n");
        } else {
            printf("Y\n");
        }
    }

    return 0;
}
