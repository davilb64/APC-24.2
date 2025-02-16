#include <stdio.h>
 
int main() {
 
    int ValorN, Diferenca, Escadinhas = 1;
    scanf("%d",&ValorN);
    int Escadinha[ValorN];

    for (int i = 0; i < ValorN; i++)
    {
        scanf("%d",&Escadinha[i]);
    }

    if (ValorN <=2)
    {
        Escadinhas = 1;
    }

    else{
        Diferenca = Escadinha[1] - Escadinha [0];
        for (int j = 2; j < ValorN; j++)
        {
            if (Diferenca != Escadinha[j] - Escadinha[j-1])
            {
                Escadinhas++;
                Diferenca = Escadinha[j] - Escadinha[j-1];
            }
        }
    }
    printf("%d\n",Escadinhas);
 
    return 0;
}