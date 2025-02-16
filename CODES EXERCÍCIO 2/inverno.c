#include <stdio.h>
 
int main() {
    int dia1, dia2, dia3;
    scanf("%d %d %d",&dia1,&dia2,&dia3);
    //caso 1//
    if (dia1 > dia2 && dia2 <= dia3)
    {
        printf(":)\n");
    }
    //caso 2//
    else if (dia1 < dia2 && dia2 >= dia3)
    {
        printf(":(\n");
    }
    //caso 3//
    else if (dia1 < dia2 && dia2 < dia3 && dia3 - dia2 < dia2 - dia1)
    {
        printf(":(\n");
    }
    //caso 4//
    else if (dia1 < dia2 && dia2 < dia3 && dia3 - dia2 >= dia2 - dia1)
    {
        printf(":)\n");
    }
    //caso 5//
    else if (dia1 > dia2 && dia2 > dia3 && dia2 - dia3 < dia1 - dia2)
    {
        printf(":)\n");
    }
    //caso 6//
    else if (dia1 > dia2 && dia2 > dia3 && dia2 - dia3 >= dia1 - dia2)
    {
        printf(":(\n");
    }
    //caso 7 e 8//
    else if (dia1 == dia2)
    {
        if (dia2 < dia3)
        {
            printf(":)\n");
        }
        else{
            printf(":(\n"); 
        }
    }
 
    return 0;
}