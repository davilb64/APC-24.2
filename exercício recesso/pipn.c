#include <stdio.h>
 
int main() {
 
    int Valor, Positivo = 0, Negativo = 0, Impar = 0, Par = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Valor);
        if (Valor % 2 == 0)
        {
            Par++;
        }
        else
        {
            Impar++;
        }

        if (Valor > 0)
        {
            Positivo++;
        }
        else if (Valor < 0)
        {
            Negativo++;
        }    
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", Par, Impar, Positivo, Negativo);
    
 
    return 0;
}