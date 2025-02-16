#include <stdio.h>
 
int main() {
 
    double Media, Cachorros, Pessoas;

    scanf("%lf %lf",&Cachorros,&Pessoas);
    Media = Cachorros/Pessoas;
    printf("%.2lf\n",Media);
 
    return 0;
}