#include <stdio.h>
 
int main() {
    double cod, quant, preco;
    scanf ("%lf %lf", &cod, &quant);
    if (cod == 1)
    {
        preco = (quant * 4);
    }
    else if (cod == 2)
    {
        preco = (quant * 4.50);
    }
    else if (cod == 3)
    {
        preco = (quant * 5);
    }
    else if (cod == 4)
    {
        preco = (quant * 2);
    }
    else if (cod == 5)
    {
        preco = (quant * 1.50);
    }
    printf("Total: R$ %.2lf\n",preco);
    
 
    return 0;
}