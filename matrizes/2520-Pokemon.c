#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_M 100

int MatrizCidade[MAX_N][MAX_M];

int main() {
    int N, M;
    int XPokemon, YPokemon, XAsh, YAsh, XAbs, YAbs;

    while (scanf("%d %d", &N, &M) != EOF) {

        XPokemon = YPokemon = XAsh = YAsh = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &MatrizCidade[i][j]);

                if (MatrizCidade[i][j] == 2) {
                    XPokemon = j;
                    YPokemon = i;
                }
                if (MatrizCidade[i][j] == 1) {
                    XAsh = j;
                    YAsh = i;
                }
            }
        }

        XAbs = abs(XPokemon - XAsh);
        YAbs = abs(YPokemon - YAsh);

        printf("%d\n", (XAbs + YAbs));
    }

    return 0;
}
