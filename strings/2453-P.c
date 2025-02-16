#include <stdio.h>
#include <string.h>
#define MAX 1001
 
int main() {
    int Caracteres, Cont = 0, Espaco = 0, Transferidor = 0;
    char Frase[MAX];
    scanf("%[^\n]",Frase);
    Caracteres = strlen(Frase);
    
    char Decodificada[MAX];
    
    for (int i = 0; i < Caracteres; i++)
    {
        if (Frase[i] == ' ')
        {
            Decodificada[Transferidor] = ' ';
            Transferidor++;
        }
        else if (Frase[i] == 'p' && i + 1 < Caracteres && Frase[i+1] != ' ')
        {
            i++;
            Decodificada[Transferidor] = Frase[i];
            Transferidor++;
        }
        else
        {
            Decodificada[Transferidor] = Frase[i];
            Transferidor++;
        }
        
    }
    Decodificada[Transferidor] = '\0';
    printf("%s\n", Decodificada);
    
    
    
    
    
    return 0;
}