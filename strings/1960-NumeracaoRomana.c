#include <stdio.h>

int main() {
    char Romano[8] = {'I', 'V', 'X', 'L', 'C', 'D', 'M', '\0'};
    char Num[100];
    int Contador = 0;

    int Entrada;
    scanf("%d", &Entrada);

    while (Entrada - 1000 >= 0) {
        Num[Contador] = Romano[6];
        Entrada -= 1000;
        Contador++;
    }

    while (Entrada - 900 >= 0) {
        Num[Contador++] = Romano[4];
        Num[Contador++] = Romano[6];
        Entrada -= 900;
    }

    while (Entrada - 500 >= 0) {
        Num[Contador] = Romano[5];
        Entrada -= 500;
        Contador++;
    }

    while (Entrada - 400 >= 0) {
        Num[Contador++] = Romano[4];
        Num[Contador++] = Romano[5];
        Entrada -= 400;
    }

    while (Entrada - 100 >= 0) {
        Num[Contador] = Romano[4];
        Entrada -= 100;
        Contador++;
    }

    while (Entrada - 90 >= 0) {
        Num[Contador++] = Romano[2];
        Num[Contador++] = Romano[4];
        Entrada -= 90;
    }

    while (Entrada - 50 >= 0) {
        Num[Contador] = Romano[3];
        Entrada -= 50;
        Contador++;
    }

    while (Entrada - 40 >= 0) {
        Num[Contador++] = Romano[2];
        Num[Contador++] = Romano[3];
        Entrada -= 40;
    }

    while (Entrada - 10 >= 0) {
        Num[Contador] = Romano[2];
        Entrada -= 10;
        Contador++;
    }

    while (Entrada - 9 >= 0) {
        Num[Contador++] = Romano[0];
        Num[Contador++] = Romano[2];
        Entrada -= 9;
    }

    while (Entrada - 5 >= 0) {
        Num[Contador] = Romano[1];
        Entrada -= 5;
        Contador++;
    }

    while (Entrada - 4 >= 0) {
        Num[Contador++] = Romano[0];
        Num[Contador++] = Romano[1];
        Entrada -= 4;
    }

    while (Entrada - 1 >= 0) {
        Num[Contador] = Romano[0];
        Entrada -= 1;
        Contador++;
    }

    Num[Contador] = '\0';

    printf("%s\n", Num);

    return 0;
}
