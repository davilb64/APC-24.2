#include <stdio.h>
 
int main() {
    int FrangoDis, BifeDis, MassaDis, FrangoPed, BifePed, MassaPed, FrangoDif, BifeDif, MassaDif, Falta;
    FrangoDif = 0;
    BifeDif = 0;
    MassaDif = 0;
    scanf("%d %d %d\n%d %d %d", &FrangoDis, &BifeDis, &MassaDis, &FrangoPed, &BifePed, &MassaPed);
    if (FrangoDis < FrangoPed)
    {
        FrangoDif = FrangoPed - FrangoDis;
    }

    if (BifeDis < BifePed)
    {
        BifeDif = BifePed - BifeDis;
    }

    if (MassaDis < MassaPed)
    {
        MassaDif = MassaPed - MassaDis;
    }
    
    Falta = (MassaDif + FrangoDif + BifeDif);
    printf("%d\n",Falta);

    return 0;
}



