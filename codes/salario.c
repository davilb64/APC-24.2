#include <stdio.h>

int main (){
    double sal,vendas,total,porc;
    char vend[50];
    scanf("%s\n%lf\n%lf",&vend,&sal,&vendas);
    porc = vendas * 0.15;
    total = sal + porc;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}