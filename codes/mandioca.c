#include <stdio.h>

int main (){
    int curu,boit,boto,mapin,iara,chica,total;
    scanf("%d %d %d %d %d",&curu,&boit,&boto,&mapin,&iara);
    chica = 225;
    total = (curu*300) + (boit*1500) + (boto*600) + (mapin*1000) + (iara*150) + chica;
    printf("%d\n",total);
    return 0;
}