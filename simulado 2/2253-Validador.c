#include <stdio.h>
#include <string.h>
 
int main() {
 
    char Senha[1000001];
    
    while (scanf("%[^\n]", Senha) != EOF)
    {
        getchar();
        int Invalida = 0, Valida_Minuscula = 0, Valida_Numero = 0, Valida_Maiuscula = 0, Caracteres;
        Caracteres = strlen(Senha);
        
        if (Caracteres < 6 || Caracteres > 32)
        {
            Invalida++;
        }
        
        for (int i = 0; i < Caracteres; i++)
        {
            if (!((Senha[i] >= 48 && Senha[i] <= 57)||(Senha[i] >= 65 && Senha[i] <= 90)||(Senha[i] >= 97 && Senha[i] <= 122)))
            {
                Invalida++;
                break;
            }
            
            if ((Senha[i] >= 48 && Senha[i] <= 57))
            {
                Valida_Numero++;
            }
            
            if ((Senha[i] >= 65 && Senha[i] <= 90))
            {
                Valida_Maiuscula++;
            }
            
            if ((Senha[i] >= 97 && Senha[i] <= 122))
            {
                Valida_Minuscula++;
            }
        }
        
        if (Invalida > 0 || Valida_Maiuscula == 0 || Valida_Minuscula == 0 || Valida_Numero == 0)
        {
            printf("Senha invalida.\n");
        }
        else
        {
            printf("Senha valida.\n");
        }
        
    }
    
    return 0;
}