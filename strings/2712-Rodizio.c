#include <stdio.h>
#include <string.h>
#define MAX 1001
 
int main() {
 
    int Testes, Caracteres, Falha = 0;
    scanf("%d",&Testes);
    
    
     for (int i = 0; i < Testes; i++)
     {
        Falha = 0;
        char Placa_Atual [MAX];
        scanf("%s",Placa_Atual);
        Caracteres = strlen(Placa_Atual);
        
        if (Caracteres != 8)
        {
            Falha++;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (Placa_Atual[i] > 90 || Placa_Atual[i] < 65)
                {
                    Falha++;
                }
            }
            if (Placa_Atual[3] != '-')
            {
                Falha++;
            }
            else
            {
                for (int i = 4; i < 8; i++)
                {
                    if (Placa_Atual[i] > 57 || Placa_Atual[i] < 48)
                    {
                        Falha++;
                    }
                } 
            }     
        }
        
        if (Falha > 0)
        {
            printf("FAILURE\n");
        }
        
        else{
            if (Placa_Atual[7] < 49)
            {
                printf("FRIDAY\n");
            }
            else if (Placa_Atual[7] < 51)
            {
                printf("MONDAY\n");
            }
            else if (Placa_Atual[7] < 53)
            {
                printf("TUESDAY\n");
            }
            else if (Placa_Atual[7] < 55)
            {
                printf("WEDNESDAY\n");
            }
            else if (Placa_Atual[7] < 57)
            {
                printf("THURSDAY\n");
            }
            else if (Placa_Atual[7] < 59)
            {
                printf("FRIDAY\n");
            }
            
            
        }
        
        
        
     }
     
    
 
    return 0;
}