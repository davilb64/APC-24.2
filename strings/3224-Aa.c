#include <stdio.h>
#include <string.h>
#define MAX 1001
 
int main() {
 
    char Consegue[MAX], Pedido[MAX];
    int Caracteres_Consegue, Caracteres_Pedido;
    scanf("%s",Consegue);
    getchar();
    scanf("%s",Pedido);
    getchar();
    
    Caracteres_Consegue = strlen(Consegue);
    Caracteres_Pedido = strlen(Pedido);
    
    if (Caracteres_Consegue >= Caracteres_Pedido)
    {
        printf("go\n");
    }
    else
    {
        printf("no\n");
    }
    
    
 
    return 0;
}