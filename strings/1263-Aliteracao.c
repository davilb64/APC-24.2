#include <stdio.h>
#include <string.h>
#define MAX 5101
 
int main() {
 
    char Frase[MAX], Iniciais[MAX];
    int Carac, j = 0, Carac_iniciais, Alit = 0;
    while (scanf(" %[^\n]",Frase) != EOF)
    {
        j = 0;
        Alit = 0;
        Carac = strlen(Frase);
        
        for (int i = 0; i < Carac; i++)
        {
            if (Frase[i] >= 'A' && Frase[i] <= 'Z')
            {
                Frase[i] = Frase[i] + 32;
            }
            
            Iniciais[j] = Frase[i];
            j++;
            while (Frase[i] != ' ' && Frase[i] != '\0' && Frase[i] != '\n')
            {
                i++;
            }
            
        }
        Iniciais[j] = '\0';
        
        Carac_iniciais = strlen(Iniciais);
        
        for (int j = 0; j < Carac_iniciais; j++)
        {
            if (Iniciais[j] == Iniciais[j+1])
            {
                Alit++;
                while (Iniciais[j] == Iniciais[j+1])
                {
                    j++;
                }
                
            }
            
        }
        
        printf("%d\n",Alit);
        
        
    }
    
 
    return 0;
}