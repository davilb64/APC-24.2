#include <stdio.h>
#define MAX_NUM 2001
 
int main() {
 
    int Vetor[MAX_NUM], ValorN, Atual;
    for (int i = 0; i < MAX_NUM; i++)
    {
        Vetor[i] = 0;
    }
    scanf ("%d", &ValorN);
    for (int j = 0; j < ValorN; j++)
    {
        scanf("%d",&Atual);
        Vetor[Atual]++;
    }
    for (int k = 0; k < MAX_NUM; k++)
    {
        if (Vetor[k]>0)
        {
            printf("%d aparece %d vez(es)\n",k,Vetor[k]);
        }
        
    }
 
    return 0;
}