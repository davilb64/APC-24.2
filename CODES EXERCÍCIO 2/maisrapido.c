#include <stdio.h>
 
int main() {
    double TempoOtavio, TempoBruno, TempoIan;
    scanf("%lf %lf %lf", &TempoOtavio, &TempoBruno, &TempoIan);
    if ((TempoOtavio < TempoBruno) && (TempoOtavio < TempoIan))
    {
        printf("Otavio\n");
    }
    else if ((TempoBruno < TempoOtavio) && (TempoBruno < TempoIan))
    {
        printf("Bruno\n");
    }
    else if ((TempoIan < TempoOtavio) && (TempoIan < TempoBruno))
    {
        printf("Ian\n");
    }
    else
    {
        printf("Empate\n");
    }
    return 0;
}