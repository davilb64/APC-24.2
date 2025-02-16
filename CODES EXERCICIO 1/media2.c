#include <stdio.h>

int main (){
    double A,B,C,M;
    scanf("%lf\n%lf\n%lf",&A,&B,&C);
    M = (A*0.2+B*0.3+C*0.5);
    printf("MEDIA = %.1lf\n",M);

    return 0;
}