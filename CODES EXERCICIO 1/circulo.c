#include <stdio.h>

int main (){
    double area,r,pi;
    pi = 3.14159;
    scanf("%lf",&r);
    area = pi * (r * r);
    printf("A=%.4lf\n",area);
    return 0;
}