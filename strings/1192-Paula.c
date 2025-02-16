#include <stdio.h>
 
int main() {
 
    int Testes, Resultado;
    char Atual[4];
    scanf("%d",&Testes);
    for (int i = 0; i < Testes; i++)
    {
        scanf("%s",Atual);
        getchar();
        
        Atual[0] -= '0';
        Atual[2] -= '0';
        
        if (Atual[2] == Atual[0])
        {
            Resultado = Atual[2] * Atual[0];
        }
        else
        {
            if (Atual[1] >= 'A' && Atual[1] <= 'Z')
            {
                Resultado = Atual[2] - Atual[0];
            }
            else if (Atual[1] >= 'a' && Atual[1] <= 'z')
            {
                Resultado = Atual[2] + Atual[0];
            }
        }
        printf("%d\n", Resultado);
        
    }
    
 
    return 0;
}