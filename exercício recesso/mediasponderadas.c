#include <stdio.h>
 
int main() {
 
    int ValorN;
    double ValorA, ValorB, ValorC, Media;
    scanf("%d", &ValorN);
    for (int i = 0; i < ValorN; i++)
    {
        scanf("%lf %lf %lf", &ValorA, &ValorB, &ValorC);
        Media = ((ValorA * 2) + (ValorB * 3) + (ValorC * 5))/10;
        printf("%.1lf\n", Media);
    }
    
 
    return 0;
}