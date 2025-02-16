#include <stdio.h>
 
int main() {
 
    int ValorN, Antecessores, Numero, Perfeito;
    scanf("%d",&ValorN);
    for (int i = 0; i < ValorN; i++)
    {
        Perfeito = 0;
        scanf("%d",&Numero);
        for (int j = 1; j < Numero; j++)
        {
            if (Numero % j == 0)
            {
                Perfeito = Perfeito + j;
            }
        }
        if (Perfeito == Numero)
        {
            printf ("%d eh perfeito\n", Numero);
        }
        else
        {
            printf ("%d nao eh perfeito\n", Numero);
        }
        
    }
 
    return 0;
}