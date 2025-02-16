#include <stdio.h>
#include <string.h>

struct carne
{
    char Tipo_Carne[21];
    int Quantidade_Carne;
};

typedef struct carne Carne;
 
int main() {
 
    int Testes, Aux;
    char AuxStr[21];
    while (scanf("%d",&Testes) != EOF)
    {
        Carne VetorCarnes[Testes];
        for (int i = 0; i < Testes; i++)
        {
            getchar();
            scanf("%s",VetorCarnes[i].Tipo_Carne);
            scanf("%d",&VetorCarnes[i].Quantidade_Carne);
        }
        
        
        //ordena
        for (int i = 0; i < Testes-1; i++)
        {
            for (int j = i+1; j < Testes; j++)
            {
                if (VetorCarnes[i].Quantidade_Carne > VetorCarnes[j].Quantidade_Carne)
                {
                    Aux = VetorCarnes[i].Quantidade_Carne;
                    VetorCarnes[i].Quantidade_Carne = VetorCarnes[j].Quantidade_Carne;
                    VetorCarnes[j].Quantidade_Carne = Aux;
                    
                    strcpy(AuxStr, VetorCarnes[i].Tipo_Carne);
                    strcpy(VetorCarnes[i].Tipo_Carne, VetorCarnes[j].Tipo_Carne);
                    strcpy(VetorCarnes[j].Tipo_Carne, AuxStr);
                }
                
            }
            
        }
        
        for (int i = 0; i < Testes; i++)
        {
            printf("%s",VetorCarnes[i].Tipo_Carne);
            if (i == Testes-1)
            {
                /* code */
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
        
    }
    
    
 
    return 0;
}