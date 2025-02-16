

#include <stdio.h>
 
int main() {
    double ValorA, ValorB, ValorC, AreaTrapezio, PerimetroTriangulo;
    scanf("%lf %lf %lf",&ValorA,&ValorB,&ValorC);

    if (ValorA >= (ValorB+ValorC) || ValorC >= (ValorB+ValorA) || ValorB >= (ValorC+ValorA))
    {
        AreaTrapezio = ((ValorA + ValorB)*ValorC)/2;
        printf("Area = %.1lf\n",AreaTrapezio);
    }
    else
    {
        PerimetroTriangulo = ValorA + ValorB + ValorC;
        printf("Perimetro = %.1lf\n",PerimetroTriangulo);
    }
    
    return 0;
}