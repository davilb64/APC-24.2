#include <stdio.h>
 
int main() {
 
    int Vetor[1000],ValorT, Valor_Atual = 0;
    scanf("%d",&ValorT);
    
    for (int i = 0; i < 1000; i++)
    {
        if (Valor_Atual == ValorT)
        {
            Valor_Atual = 0;
        }
        Vetor[i] = Valor_Atual;
        printf("N[%d] = %d\n",i,Vetor[i]);
        Valor_Atual++;
    }
    
 
    return 0;
}