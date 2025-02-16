#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    int menor_par = (X % 2 == 0) ? X + 2 : X + 1;
    printf("%d\n", menor_par);
    return 0;
}
