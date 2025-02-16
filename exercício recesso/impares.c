#include <stdio.h>
 
int main() {
 
    int ValorN;
    scanf("%d",&ValorN);
    for (int i = 0; i <= ValorN; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        
    }
    
 
    return 0;
}