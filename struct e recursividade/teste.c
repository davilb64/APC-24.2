#include <stdio.h>

int posicao(int Entrada, int Vetor[40]){
    if (Entrada == 0)
    {
        Vetor[Entrada] = 0;
        return 0;
    }
    if (Entrada == 1)
    {
        Vetor[Entrada] = 0;
        return 1;
    }
    int Ans = posicao(Entrada-1, Vetor) + posicao(Entrada-2, Vetor);

    Vetor[Entrada] = Vetor[Entrada-1] + Vetor[Entrada-2] + 1; 
    return Ans;
}
 
int main() {
 
    int Repeticoes, Entrada, Chamadas, NumeroDaPos, Vetor[40];
    scanf("%d",&Repeticoes);
    for (int i = 0; i < Repeticoes; i++)
    {
        scanf("%d",&Entrada);
        NumeroDaPos = posicao(Entrada, Vetor);

        printf("fib(%d) = %d calls = %d\n",Entrada,Vetor[Entrada]*2,NumeroDaPos);
    }
    
    return 0;
}