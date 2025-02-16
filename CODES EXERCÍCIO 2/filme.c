#include <stdio.h>
 
int main() {
    double ValorAntigo, ValorNovo, Aumento;
    scanf("%lf %lf", &ValorAntigo, &ValorNovo);
    Aumento = ((ValorNovo - ValorAntigo)/ValorAntigo)*100;
    printf("%.2lf%%\n",Aumento);
 
    return 0;
}