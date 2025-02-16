#include <stdio.h>
 
int main() {
    int ValorN;
    double Perc_C, Perc_R, Perc_S, Quant_C, Quant_R, Quant_S, Total, Quant_Indef;
    char Tipo;
    Quant_C = 0;
    Quant_R = 0;
    Quant_S = 0;
    Total = 0;
    scanf ("%d", &ValorN);
    for (int i = 0; i < ValorN; i++)
    {
        scanf("%lf %c",&Quant_Indef, &Tipo);
        if (Tipo == 'C')
        {
            Quant_C = Quant_C + Quant_Indef;
        }
        else if (Tipo == 'R')
        {
            Quant_R = Quant_R + Quant_Indef;
        }
        else if (Tipo == 'S')
        {
            Quant_S = Quant_S + Quant_Indef;
        }
        Total = Total + Quant_Indef;
    }
    Perc_C = (Quant_C/Total) * 100;
    Perc_R = (Quant_R/Total) * 100;
    Perc_S = (Quant_S/Total) * 100;

    printf("Total: %.0lf cobaias\nTotal de coelhos: %.0lf\nTotal de ratos: %.0lf\nTotal de sapos: %.0lf\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", Total, Quant_C, Quant_R, Quant_S, Perc_C, Perc_R, Perc_S);
   
    return 0;
}