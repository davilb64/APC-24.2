#include <stdio.h>

int main() {
    int Pessoas, Sortudo, Contador_Teste = 1;

    while (scanf("%d", &Pessoas) && Pessoas != 0) {
        int Vetor_Ingressos[Pessoas];

        for (int i = 0; i < Pessoas; i++) {
            scanf("%d", &Vetor_Ingressos[i]);
        }

        for (int i = 0; i < Pessoas; i++) {
            if ((i + 1) == Vetor_Ingressos[i]) {
                Sortudo = Vetor_Ingressos[i];
                break;
            }
        }

        printf("Teste %d\n", Contador_Teste);
        printf("%d\n\n", Sortudo);
        Contador_Teste++;
    }

    return 0;
}
