#include <stdio.h>
 
int main() {
 
    int Valor, Resultado;
    scanf("%d", &Valor);
    for (int i = 1; i <= 10; i++)
    {
        Resultado = i * Valor;
        printf("%d x %d = %d\n", i, Valor, Resultado);
    }
    
 
    return 0;
}