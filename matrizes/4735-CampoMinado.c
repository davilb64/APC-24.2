#include <stdio.h>

int main() {
    int Lin, Col, Count;
    scanf("%d %d", &Lin, &Col);
    getchar();

    char MatrizCampo[Lin][Col];

    for (int i = 0; i < Lin; i++) {
        for (int j = 0; j < Col; j++) {
            scanf("%c", &MatrizCampo[i][j]);
        }
        getchar();
    }

    for (int i = 0; i < Lin; i++) {
        for (int j = 0; j < Col; j++) {
            Count = 0;
            if (MatrizCampo[i][j] == '.') {
                if (i + 1 < Lin) {
                    if (MatrizCampo[i + 1][j] == '*') {
                        Count++;
                    }
                }
                if (i - 1 >= 0) {
                    if (MatrizCampo[i - 1][j] == '*') {
                        Count++;
                    }
                }
                if (j + 1 < Col) {
                    if (MatrizCampo[i][j + 1] == '*') {
                        Count++;
                    }
                }
                if (j - 1 >= 0) {
                    if (MatrizCampo[i][j - 1] == '*') {
                        Count++;
                    }
                }
                if (i - 1 >= 0 && j - 1 >= 0) {
                    if (MatrizCampo[i - 1][j - 1] == '*') {
                        Count++;
                    }
                }
                if (i + 1 < Lin && j - 1 >= 0) {
                    if (MatrizCampo[i + 1][j - 1] == '*') {
                        Count++;
                    }
                }
                if (i - 1 >= 0 && j + 1 < Col) {
                    if (MatrizCampo[i - 1][j + 1] == '*') {
                        Count++;
                    }
                }
                if (i + 1 < Lin && j + 1 < Col) {
                    if (MatrizCampo[i + 1][j + 1] == '*') {
                        Count++;
                    }
                }

                MatrizCampo[i][j] = Count + '0';
            }
        }
    }

    for (int i = 0; i < Lin; i++) {
        for (int j = 0; j < Col; j++) {
            printf("%c", MatrizCampo[i][j]);
        }
        printf("\n");
    }

    return 0;
}
