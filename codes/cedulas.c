#include <stdio.h>
#include<math.h>

int main (){
    int aini, a, cem,cinq,vint,dez,cinc,dois,um;
    scanf("%d",&aini);
    cem = floor(aini/100);
    a = aini%100;
    cinq = floor(a/50);
    a = a%50;
    vint = floor(a/20);
    a = a%20;
    dez = floor(a/10);
    a = a%10;
    cinc = floor(a/5);
    a = a%5;
    dois = floor(a/2);
    a = a%2;
    um = floor(a/1);
    printf ("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",aini,cem,cinq,vint,dez,cinc,dois,um);
    return 0;
}