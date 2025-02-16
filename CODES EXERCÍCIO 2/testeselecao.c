#include <stdio.h>
 
int main() {
    int ValorA, ValorB, ValorC, ValorD;
    scanf("%d %d %d %d",&ValorA, &ValorB, &ValorC, &ValorD);
    if (ValorB > ValorC && ValorD > ValorA && ValorC + ValorD > ValorA + ValorB && ValorC > 0 && ValorD > 0 && ValorA%2 == 0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    
    return 0;
}