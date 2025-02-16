#include <stdio.h>
 
int main() {
 
    int ValorA, ValorB, ValorM, Resto, Divisao;
    scanf("%d %d %d",&ValorA,&ValorB,&ValorM);
    Resto = (ValorA - ValorB) % ValorM;
    Divisao = (ValorA - ValorB) / ValorM;
    if (Resto != 0)
    {
        printf("Nao\n");
    }
    else
    {
        printf("Sim\n%d\n",Divisao);
    }
    
    
 
    return 0;
}