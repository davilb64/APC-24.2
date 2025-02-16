#include <stdio.h>
 
int main() {
    int Distancia;
    scanf("%d",&Distancia);
    if (Distancia <= 800)
    {
        printf("1\n");
    }
    else if ((Distancia > 800) &&(Distancia <= 1400))
    {
        printf("2\n");
    }
    else
    {
        printf("3\n");
    }
    return 0;
}