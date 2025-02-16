#include <stdio.h>
 
int main() {
    int ValorN, Abertura, Estrela, Visivel = 0;

    scanf("%d",&Abertura);
    scanf("%d",&ValorN);

    for (int i = 0; i < ValorN; i++)
    {
        scanf("%d",&Estrela);
        if (Estrela * Abertura >= 40000000)
        {
            Visivel++;
        }
        
    }
    printf("%d\n",Visivel);
    
 
    return 0;
}