#include <stdio.h>
 
int main() {
    
    double Nota, Total = 0, Media;
    int i = 0;
    while (i < 2)
    {
        scanf("%lf", &Nota);
        if (Nota >= 0 && Nota <= 10)
        {
            i++;
            Total = Total + Nota;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    Media = Total/2;
    printf("media = %.2lf\n", Media);
    
    return 0;
}