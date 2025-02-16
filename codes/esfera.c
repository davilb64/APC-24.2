#include <stdio.h>

int main (){
    double raio, pi, v;
    scanf("%lf",&raio);
    pi = 3.14159;
    v = (4/3.0)*pi*(raio*raio*raio);
    printf("VOLUME = %.3lf\n",v);

    return 0;
}