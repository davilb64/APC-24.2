#include <stdio.h>
 
int main() {
 
    int Valor, Resultado;
    scanf("%d", &Valor);
    for (int i = 1; i <= Valor; i++)
    {
        if (i % 2 == 0)
        {
            Resultado = i * i;
            printf("%d^2 = %d\n", i, Resultado);
        }
        
    }
    
 
    return 0;
}