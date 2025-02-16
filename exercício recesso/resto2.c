#include <stdio.h>
 
int main() {
 
    int ValorN;
    scanf("%d",&ValorN);
    for (int i = 1; i <= 10000; i++)
    {
        if (i % ValorN == 2)
        {
            printf("%d\n", i);
        }
        
    }
    

    return 0;
}