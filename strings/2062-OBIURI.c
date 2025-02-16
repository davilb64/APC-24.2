#include <stdio.h>
#include <string.h>
#define MAX 20

int main() {
    int Palavras, Caracteres;
    scanf("%d", &Palavras);

    for (int i = 0; i < Palavras; i++) {
        char Atual[MAX];
        scanf("%s", Atual);
        Caracteres = strlen(Atual);

        if (Caracteres == 3) {
            if (Atual[0] == 'O' && Atual[1] == 'B') {
                Atual[2] = 'I';
            } else if (Atual[0] == 'U' && Atual[1] == 'R') {
                Atual[2] = 'I';
            }
        }

        printf("%s", Atual);

        if (i < Palavras - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
