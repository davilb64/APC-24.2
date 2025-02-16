#include <stdio.h>
 
int main() {
    int ValorA, ValorB;
    scanf("%d %d",&ValorA,&ValorB);
    if (ValorA%ValorB == 0 || ValorB%ValorA == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}