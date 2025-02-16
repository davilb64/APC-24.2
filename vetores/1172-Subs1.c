#include <stdio.h>
 
int main() {
 
    int Vetor[10],Atual;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&Atual);
        if (Atual <= 0)
        {
            Atual = 1;
        }
        Vetor[i] = Atual;
        printf("X[%d] = %d\n",i,Vetor[i]);
    }
    
    
    
 
    return 0;
}