#include <stdio.h>
#include <math.h>
 
int main() {
    int Xinicial, Yinicial, Xfinal, Yfinal, Dify, Difx;

    scanf("%d %d %d %d",&Xinicial, &Yinicial, &Xfinal, &Yfinal);

    while (Xfinal != 0 && Yfinal != 0 && Xinicial != 0 && Yinicial != 0)
    {
        Difx = fabs(Xfinal - Xinicial);
        Dify = fabs(Yfinal - Yinicial);
        //casos de 0 movimentos
        if (Xfinal == Xinicial && Yfinal == Yinicial)
        {
            printf("0\n");
        }
        //casos de 1 movimento
        else if (Xfinal == Xinicial || Yfinal == Yinicial || Difx == Dify)
        {
            printf("1\n");
        }
        //casos de 2 movimentos
        else
        {
            printf("2\n");
        }

        scanf("%d %d %d %d",&Xinicial, &Yinicial, &Xfinal, &Yfinal);
    }
    
    
 
    return 0;
}