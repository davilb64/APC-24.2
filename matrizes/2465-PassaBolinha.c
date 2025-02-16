#include <stdio.h>

int main() {
    int N, I, J;
    scanf("%d", &N);
    scanf("%d %d", &I, &J);

    int Matriz[101][101] = {0};
    int Bandeiras[101][101] = {0};

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%d", &Matriz[i][j]);
        }
    }

    int Fila[10000][2];
    int Inicio = 0, Fim = 0;

    Fila[Fim][0] = I;
    Fila[Fim][1] = J;
    Fim++;
    Bandeiras[I][J] = 1;

    while (Inicio < Fim) {
        int AtualI = Fila[Inicio][0];
        int AtualJ = Fila[Inicio][1];
        Inicio++;

        for (int k = 0; k < 4; k++) {
            int NovoI = AtualI, NovoJ = AtualJ;

            if (k == 0) {
                NovoI--;
            } else if (k == 1) {
                NovoJ++;
            } else if (k == 2) {
                NovoI++;
            } else if (k == 3) {
                NovoJ--;
            }

            if (NovoI >= 1 && NovoI <= N && NovoJ >= 1 && NovoJ <= N) {
                if (Matriz[NovoI][NovoJ] >= Matriz[AtualI][AtualJ] && Bandeiras[NovoI][NovoJ] == 0) {
                    Bandeiras[NovoI][NovoJ] = 1;
                    Fila[Fim][0] = NovoI;
                    Fila[Fim][1] = NovoJ;
                    Fim++;
                }
            }
        }
    }

    int Contador = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (Bandeiras[i][j] == 1) {
                Contador++;
            }
        }
    }

    printf("%d\n", Contador);

    return 0;
}