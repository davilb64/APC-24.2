#include <stdio.h>

int min (int ValorA, int ValorB){
    if (ValorA>ValorB)
    {
        return(ValorB);
    }
    else{
        return(ValorA);
    }
    
}

int max (int ValorA, int ValorB){
    if (ValorA>ValorB)
    {
        return(ValorA);
    }
    else{
        return(ValorB);
    }
    
}
 
int main() {
    int ValorA, ValorB, ValorC, Minimo, Maximo, Medio;
    scanf("%d %d %d",&ValorA,&ValorB,ValorC);
    Minimo = min(ValorC, min(ValorA,ValorB));
    Maximo = max(ValorC, max(ValorA,ValorB));
    Medio = (ValorA + ValorB + ValorC) - (Minimo + Maximo);
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",Minimo,Medio,Maximo,Maximo,Medio,Minimo);
    
 
    return 0;
}