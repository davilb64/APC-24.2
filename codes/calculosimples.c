#include <stdio.h>

int main (){
    int p1, np1, p2, np2;
    double vu1, vu2, vt1, vt2, vt;

    scanf("%d %d %lf",&p1,&np1,&vu1);
    scanf("%d %d %lf",&p2,&np2,&vu2);

    vt1 = np1*vu1;
    vt2 = np2*vu2;

    vt = vt1 + vt2;
    printf ("VALOR A PAGAR: R$ %.2lf\n", vt);

    return 0;
}