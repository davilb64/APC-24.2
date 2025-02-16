#include <stdio.h>
int max(int fatora, int fatorb){
    if (fatora > fatorb)
    {
        return(fatora);
    }
    else{
        return(fatorb);
    }
    
}
 
int main() {
    int CartaA, CartaB, CartaC;
    scanf("%d %d",&CartaA,&CartaB);
    CartaC = max(CartaA, CartaB);
    printf("%d\n",CartaC);
    return 0;
}