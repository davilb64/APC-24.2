#include <stdio.h>
 
int main() {
 
    int ValorTestado, MaiorTemp, PosMaior;
    scanf ("%d", &MaiorTemp);
    for (int i = 1; i < 100; i++)
    {
        scanf("%d", &ValorTestado);
        if (ValorTestado > MaiorTemp)
        {
            MaiorTemp = ValorTestado;
            PosMaior = i + 1;
        }
        
    }
    printf ("%d\n%d\n", MaiorTemp, PosMaior);
 
    return 0;
}