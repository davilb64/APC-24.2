#include <stdio.h>
int main() {
 
    int ValorN, VotoA, VotoB, Errado;
    VotoA = 0;
    VotoB = 0;
    Errado = 0;

    scanf("%d",&ValorN);

    scanf("%d",&VotoA);
    for (int i = 1; i < ValorN; i++)
    {  
        scanf("%d",&VotoB);
        if (VotoB>VotoA)
        {
            Errado++;
        }
        
    }
    if (Errado > 0)
    {
        printf("N\n");
    }
    else
    {
        printf("S\n");
    }
    
    return 0;
}