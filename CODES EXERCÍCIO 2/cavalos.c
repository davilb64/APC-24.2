#include <stdio.h>
#include <math.h>
 
int main() {
    char ColunaInicial, ColunaFinal;
    int DifCol, DifLin, LinhaInicial, LinhaFinal;

    scanf("%c%d %c%d",&ColunaInicial,&LinhaInicial,&ColunaFinal,&LinhaFinal);
    DifCol = fabs(ColunaFinal - ColunaInicial);
    DifLin = fabs(LinhaFinal - LinhaInicial);
    if (DifCol == 2 && DifLin == 1 || DifLin == 2 && DifCol == 1)
    {
        printf("VALIDO\n");
    }
    else
    {
        printf("INVALIDO\n");
    }
 
    return 0;
}