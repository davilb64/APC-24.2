#include <stdio.h>
#include <string.h>
 
int main() {
 
    char Nacionalidade[21];
    char Aux[21];
    int Casos, Pessoas, Nativo;
    
    scanf("%d",&Casos);
    
    for (int i = 0; i < Casos; i++)
    {
        Nativo = 1;
        scanf("%d",&Pessoas);
        
        scanf("%s",Aux);
        getchar();
        
        for (int i = 1; i < Pessoas; i++)
        {
            scanf("%s",Nacionalidade);
            getchar();
            
            if (strcmp(Aux,Nacionalidade) == 0)
            {
            }
            else
            {
            Nativo = 0;
            }
        }
        
        if (Nativo == 1)
        {
            printf("%s\n",Nacionalidade);
        }
        else
        {
            printf("ingles\n");
        }
        
    }
    
 
    return 0;
}