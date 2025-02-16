#include <stdio.h>
 
int main() {
 
    int ValorX, ValorY;
    scanf("%d %d", &ValorX, &ValorY);
    for (int i = 1; i <= ValorY; i++)
    {
        printf("%d", i);
        if (i % ValorX == 0)
        {
            printf("\n");
        }
        else if (i != ValorY)
        {
            printf(" ");
        }
        
    }
    
    
 
    return 0;
}