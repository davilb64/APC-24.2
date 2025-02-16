#include <stdio.h>

int gcd(int A, int B){
    if (B == 0)
    {
        return A;
    }
    return gcd(B,A%B);
}
 
int main() {
 
    int Casos,FigurasA,FigurasB;
    scanf("%d",&Casos);
    for (int i = 0; i < Casos; i++)
    {
        scanf("%d %d",&FigurasA,&FigurasB);
        int MDC = gcd(FigurasA,FigurasB);
        printf("%d\n",MDC);
    }
    
 
    return 0;
}