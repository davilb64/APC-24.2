#include <stdio.h>

int main() {
    int Positivo = 0;
    double Valor, Media, TotalPositivo = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &Valor);
        if (Valor > 0) {
            Positivo++;
            TotalPositivo = TotalPositivo + Valor;
        }
    }

    Media = TotalPositivo / Positivo;

    printf("%d valores positivos\n", Positivo);
    printf("%.1lf\n", Media);

    return 0;
}
