#include <stdio.h>
 
int main() {
 
    int Senha;
    scanf("%d", &Senha);
    while (Senha != 2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &Senha);
    }
    printf("Acesso Permitido\n");
 
    return 0;
}