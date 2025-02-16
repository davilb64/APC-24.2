#include <stdio.h>

int main (){
    double A,B,C,tri,cir,tra,qua,ret,pi;
    scanf("%lf %lf %lf",&A,&B,&C);
    pi = 3.14159;
    tri = (A*C)/2;
    cir = pi * (C*C);
    tra = ((A+B)*C)/2;
    qua = B*B;
    ret = A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,qua,ret);

    return 0;
}