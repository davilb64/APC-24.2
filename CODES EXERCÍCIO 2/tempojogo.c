#include <stdio.h>
 
int main() {
    int HoraInicial, HoraFinal, Duracao;
    scanf("%d %d",&HoraInicial,&HoraFinal);
    if (HoraInicial > HoraFinal)
    {
        Duracao = 24 - HoraInicial + HoraFinal;
    }
    else if (HoraFinal == HoraInicial)
    {
        Duracao = 24;
    }
    else
    {
        Duracao = HoraFinal - HoraInicial;
    }
    printf("O JOGO DUROU %d HORA(S)\n",Duracao);
    
    return 0;
}