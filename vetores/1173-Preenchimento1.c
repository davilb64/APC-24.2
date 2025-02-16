#include <stdio.h>
 
int main() {
 
    int Vetor[10], Valor;
    scanf("%d", &Valor);
    
    for (size_t i = 0; i < 10; i++)
    {
        Vetor[i] = Valor;
        printf("N[%d] = %d\n",i,Valor);
        Valor = Valor * 2;
    }
    
 
    return 0;
}