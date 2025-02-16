#include <stdio.h>
 
int main() {
 
    int ValorN, ValordoTeste, Primo;
    Primo = 0;
    scanf("%d", &ValorN);
    for (int i = 0; i < ValorN; i++)
    {
        scanf("%d", &ValordoTeste);
        Primo = 0;
        for (int j = 2; j <= ValordoTeste / 2; j++)
        {
            if (ValordoTeste % j == 0)
            {
                Primo++;
            }
        }

        if (Primo == 0)
        {
            printf("%d eh primo\n", ValordoTeste);
        }
        else
        {
            printf("%d nao eh primo\n", ValordoTeste);
        } 
        
    }
    
    return 0;
}