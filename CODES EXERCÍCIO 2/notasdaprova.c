#include <stdio.h>
 
int main() {
    int Nota;
    scanf ("%d",&Nota);

    if (Nota == 0)
    {
        printf("E\n");
    }
    else if (Nota > 0 && Nota < 36)
    {
        printf("D\n");
    }
    else if (Nota > 35 && Nota < 61)
    {
        printf("C\n");
    }
    else if (Nota > 60 && Nota < 86)
    {
        printf("B\n");
    }
    else
    {
       printf("A\n"); 
    }
 
    return 0;
}