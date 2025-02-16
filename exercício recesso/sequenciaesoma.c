#include <stdio.h>

int maior (int ValorA, int ValorB){
    if (ValorA > ValorB)
    {
        return(ValorA);
    }
    else
    {
        return(ValorB);
    }
}

int menor (int ValorA, int ValorB){
    if (ValorA > ValorB)
    {
        return(ValorB);
    }
    else
    {
        return(ValorA);
    }
    
    
    
}
 
int main() {
 
    int ValorA, ValorB, Menor, Maior, Soma;

    scanf("%d %d",&ValorA, &ValorB);

    while (ValorA > 0 && ValorB > 0)  
    {
        Soma = 0;
        Menor = menor(ValorA,ValorB);
        Maior = maior(ValorA, ValorB);
        for (int i = Menor; i <= Maior; i++)
        {
            printf("%d ",i);
            Soma = Soma + i;
        }
        printf("Sum=%d\n", Soma);

        scanf("%d %d",&ValorA, &ValorB);
    }
    
 
    return 0;
}