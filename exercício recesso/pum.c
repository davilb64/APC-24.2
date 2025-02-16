#include <stdio.h>
 
int main() {
 
    int Alc = 0, Gas = 0, Die = 0, Digi = 0;
    while (Digi != 4)
    {
        scanf("%d", &Digi);
        if (Digi == 1)
        {
            Alc++;
        }
        else if (Digi == 2)
        {
            Gas++;
        }
        else if (Digi == 3)
        {
            Die++;
        } 
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", Alc, Gas, Die);
    
    return 0;
}