#include <stdio.h>
#define MAX_QUESTOES 5
 
int main() {
    
    int Numero_Questoes = 1, Invalido = 0;
    
    while (Numero_Questoes > 0)
    {
        scanf("%d",&Numero_Questoes);
        for (int i = 0; i < Numero_Questoes; i++)
        {
            Invalido = 0;
            int Linha_Atual[MAX_QUESTOES];
            
            for (int i = 0; i < MAX_QUESTOES; i++)
            {
                scanf("%d",&Linha_Atual[i]);
            }
            
            for (int i = 0; i < MAX_QUESTOES; i++)
            {
                if (Linha_Atual[i] > 127)
                {
                    Linha_Atual[i] = 0;
                }
                else
                {
                    Linha_Atual[i] = 1;
                }
            }
            
            for (int i = 0; i < MAX_QUESTOES; i++)
            {
                if (Linha_Atual[i] == 1)
                {
                    Invalido++;
                }
            }
            
            if (Invalido == 1)
            {
            if (Linha_Atual[0] == 1)
                {
                    printf("A\n");
                }
                if (Linha_Atual[1] == 1)
                {
                    printf("B\n");
                }
                if (Linha_Atual[2] == 1)
                {
                    printf("C\n");
                }
                if (Linha_Atual[3] == 1)
                {
                    printf("D\n");
                }
                if (Linha_Atual[4] == 1)
                {
                    printf("E\n");
                }
                
            }
            else{
                printf("*\n");
            }
            
        }
    }
    
    
    return 0;
}