#include <stdio.h>

int maior (int ValorA, int ValorB){
    if (ValorA > ValorB)
    {
        return(ValorA);
    }
    else
    {
        return(ValorB);
    } 
}

int menor (int ValorA, int ValorB){
    if (ValorA > ValorB)
    {
        return(ValorB);
    }
    else
    {
        return(ValorA);
    } 
}
 
int main() {
 
    int Valor, Acougue, Farmacia, Padaria, Maior, Menor, Medio;
    scanf("%d %d %d %d",&Valor,&Acougue,&Farmacia,&Padaria);
    Maior = maior(Farmacia,maior(Padaria,Acougue));
    Menor = menor(Farmacia,menor(Padaria,Acougue));
    Medio = (Acougue + Farmacia + Padaria) - (Maior + Menor);

    if (Valor >= Menor)
    {
        Valor = Valor - Menor;
        if (Valor >= Medio)
        {
            Valor = Valor - Medio;
            if (Valor >= Maior)
            {
                printf("3\n");
            }
            else
            {
                printf("2\n");
            }   
        }
        else
        {
            printf("1\n");
        } 
    }
    else
    {
        printf("0\n");
    }
    return 0;
}