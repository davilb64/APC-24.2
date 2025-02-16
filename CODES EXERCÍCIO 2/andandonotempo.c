#include <stdio.h>
 
int main() {
    int CreditoA, CreditoB, CreditoC;
    scanf("%d %d %d", &CreditoA, &CreditoB, &CreditoC);
    if (CreditoA == CreditoB || CreditoA == CreditoC || CreditoB == CreditoC || CreditoA + CreditoB == CreditoC || CreditoC + CreditoA == CreditoB || CreditoB + CreditoC == CreditoA)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}