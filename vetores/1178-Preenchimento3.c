#include <stdio.h>
 
int main() {
  
    int Vetor[100]; 
    double ValorX;
    scanf("%lf",&ValorX);
    for (int i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n",i,ValorX);
        ValorX = ValorX/2;
    }
    
 
    return 0;
}