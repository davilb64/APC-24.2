#include <stdio.h>

int analise(int Entrada, int Maior) {
    if (Entrada > Maior) {
        Maior = Entrada;
    }

    if (Entrada == 1) {
        return Maior;
    }

    if (Entrada % 2 == 0) {
        return analise(Entrada / 2, Maior);
    } else {
        return analise(3 * Entrada + 1, Maior);
    }
}

int main() {
    int Entrada;
    while (scanf("%d", &Entrada) && Entrada != 0) {
        int Maior = analise(Entrada, Entrada);
        printf("%d\n", Maior);
    }
    return 0;
}