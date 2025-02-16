#include <stdio.h>

int main() {

    int ValorX, ValorY, Maior, Menor, Total = 0;

    scanf("%d %d", &ValorX, &ValorY);

    if (ValorX > ValorY) {
        Maior = ValorX;
        Menor = ValorY;
    } else {
        Maior = ValorY;
        Menor = ValorX;
    }

    for (int i = Menor; i <= Maior; i++) {
        if (i % 13 != 0) {
            Total += i;
        }
    }

    printf("%d\n", Total);

    return 0;
}
