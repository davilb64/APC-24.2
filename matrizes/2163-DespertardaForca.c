#include <stdio.h>

int main() {
    int Lin, Col, Count = 0, CordX = 0, CordY = 0;
    scanf("%d %d", &Lin, &Col);
    int MatrizVarrida[Lin][Col];

    for (int i = 0; i < Lin; i++) {
        for (int j = 0; j < Col; j++) {
            scanf("%d", &MatrizVarrida[i][j]);
        }
    }

    for (int i = 1; i < Lin - 1; i++) {
        for (int j = 1; j < Col - 1; j++) {
            if (MatrizVarrida[i][j] == 42) {
                Count = 0;

                if (MatrizVarrida[i+1][j] == 7) {
                    Count++;
                }
                if (MatrizVarrida[i][j+1] == 7) {
                    Count++;
                }
                if (MatrizVarrida[i-1][j] == 7) {
                    Count++;
                }
                if (MatrizVarrida[i][j-1] == 7) {
                    Count++;
                }
                if (MatrizVarrida[i+1][j+1] == 7) {
                    Count++;
                }
                if (MatrizVarrida[i-1][j-1] == 7) {
                    Count++;
                }
                if (MatrizVarrida[i+1][j-1] == 7) {
                    Count++;
                }
                if (MatrizVarrida[i-1][j+1] == 7) {
                    Count++;
                }

                if (Count == 8) {
                    CordX = i + 1;
                    CordY = j + 1;
                    i = Lin;
                    break;
                }
            }
        }
    }

    printf("%d %d\n", CordX, CordY);

    return 0;
}
