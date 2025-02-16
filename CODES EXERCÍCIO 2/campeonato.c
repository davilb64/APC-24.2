#include <stdio.h>
 
int main() {
    int CorVit, CorEmp, CorSal, FlaVit, FlaEmp, FlaSal, PontosCor, PontosFla;
    scanf("%d %d %d %d %d %d", &CorVit, &CorEmp, &CorSal, &FlaVit, &FlaEmp, &FlaSal);
    PontosCor = (CorVit * 3) + (CorEmp);
    PontosFla = (FlaVit * 3) + (FlaEmp);
    if (PontosCor > PontosFla)
    {
        printf("C\n");
    }
    else if (PontosCor < PontosFla)
    {
        printf("F\n");
    }
    else{
        if (FlaSal > CorSal)
        {
            printf("F\n");
        }
        else if (FlaSal < CorSal)
        {
            printf("C\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}