#include <stdio.h>

int main() {
    double Matriz[12][12], Result = 0;
    char Operacao;
    
    scanf("%c", &Operacao);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &Matriz[i][j]);
        }
    }
    
    int count = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) { // j > i
            Result = Result + Matriz[i][j];
            count++;
        }
    }
    
    if (Operacao == 'S') {
        printf("%.1lf\n", Result);
    } else if (Operacao == 'M') {
        printf("%.1lf\n", Result / count);
    }

    return 0;
}
