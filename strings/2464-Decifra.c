#include <stdio.h>
#include <string.h>
#define MAX_ALF 27
#define MAX_CRIPT 10001
 
int main() {
    /////// Declaração de Variáveis
    int Comprimento_Frase, Letra_Atual;
    char Frase_Decript[MAX_CRIPT];
    char Alfabeto_Cript[MAX_ALF];
    char Frase_Cript[MAX_CRIPT];
    
    //////Escanear o alfabeto usado
    scanf("%s",Alfabeto_Cript);
    getchar();
    
    ///////Escanear o código criptografado
    scanf("%s",Frase_Cript);
    
    ///////Ver o Comprimento da String pra colocar no For
    Comprimento_Frase = strlen(Frase_Cript);
    
    ///////Percorrer a string substituindo pelos valores do alfabeto
    for (int i = 0; i < Comprimento_Frase; i++)
    {
        Letra_Atual = Frase_Cript[i] - 97;/////adequação à ascii
        Frase_Decript[i] = Alfabeto_Cript[Letra_Atual];
    }
    
    ////////imprimir string decriptada
    printf("%s\n",Frase_Decript);
    
    
    return 0;
}