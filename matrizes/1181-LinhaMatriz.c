#include <stdio.h>
 
int main() {
 
    int ColunaEntrada;
    char Operacao;
    double Matriz[12][12],FinalResult=0;
    
    scanf("%d",&ColunaEntrada);
    getchar();
    scanf("%c",&Operacao);
    
    
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf",&Matriz[i][j]);
        }
    }
    
    for (int i = 0; i < 12; i++)
    {
        FinalResult = FinalResult+Matriz[i][ColunaEntrada];
    }
    
    if (Operacao == 'S')
    {
        printf("%.1lf\n",FinalResult);
    }
    
    else if (Operacao == 'M')
    {
        printf("%.1lf\n",(FinalResult/12));
    }
    
    
    
    
 
    return 0;
}