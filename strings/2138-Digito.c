#include <stdio.h>
#include <string.h>
#define MAX 10001
 
int main() {
 
    int Vetor_Contador[10], Contador, Inteiro, Maior_Contador, Maior;
    
    char Numero[MAX];
    
    while (scanf("%s",Numero) != EOF)
    {
        for (int i = 0; i < 10; i++)
        {
            Vetor_Contador[i] = 0;
        }
        
        Maior_Contador = 0;
        Maior = 0;
        
        Contador = strlen(Numero);
        
        for (int i = 0; i < Contador; i++)
        {
            Inteiro = Numero[i] - 48;
            Vetor_Contador[Inteiro]++;
        }
        
        for (int i = 0; i < 10; i++)
        {
            if ((Vetor_Contador[i] > Maior_Contador) || (Vetor_Contador[i] == Maior_Contador && i > Maior)){
                Maior_Contador = Vetor_Contador[i];
                Maior = i;
            }
            
            
        }
        printf("%d\n",Maior);
        
    }
    
    return 0;
}