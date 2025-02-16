#include <stdio.h>
#include <stdlib.h>

int main() {

    int ValorN;

    while (scanf("%d", &ValorN) != EOF)
    {
        int Trabalhos[ValorN];
        long long Full = 0, Metade1 = 0, Dif_menor = 100000;

        for (int i = 0; i < ValorN; i++) {
            scanf("%d", &Trabalhos[i]);
            Full += Trabalhos[i];
        }

        for (int k = 0; k < ValorN; k++) {
            Metade1 += Trabalhos[k];
            long long Metade2 = Full - Metade1;
            long long Dif_Atual = llabs(Metade1 - Metade2);

            if (Dif_Atual < Dif_menor) {
                Dif_menor = Dif_Atual;
            }
        }

        printf("%lld\n", Dif_menor);
    }

    return 0;
}
