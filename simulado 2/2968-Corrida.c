#include <stdio.h>
#include <math.h>
 
int main() {
 
    int Voltas, Placas;
    double Placas_Totais, Porcentagem = 0.1, Atual;
    
    scanf("%d %d",&Voltas,&Placas);
    Placas_Totais = Voltas * Placas;
    
    for (int i = 0; i < 9; i++)
    {
        Atual = Porcentagem * Placas_Totais;
        Atual = ceil(Atual);
        
        printf("%.0lf", Atual);
        
        if (i < 8)
        {
            printf(" ");
        }
        
        Porcentagem = Porcentagem + 0.1;
    }
    printf("\n");
    
    return 0;
}