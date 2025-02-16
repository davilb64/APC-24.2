#include <stdio.h>

int main() {
    int Matriz[501][501] = {0}, Raios, Xatual, Yatual, Falso = 0;

    scanf("%d", &Raios);

    for (int i = 0; i < Raios; i++) {
        scanf("%d %d", &Xatual, &Yatual);
        Matriz[Xatual][Yatual]++;
        if (Matriz[Xatual][Yatual] > 1) {
            Falso = 1;
        }
    }

    printf("%d\n", Falso);

    return 0;
}