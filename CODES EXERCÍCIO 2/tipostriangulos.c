#include <stdio.h>
//função encontra o mínimo de dois valores
double min(double fatora, double fatorb){
    if (fatora > fatorb)
    {
        return(fatorb);
    }
    else{
        return(fatora);
    }
    
}
//função encontra o máximo de dois valores

double max(double fatora, double fatorb){
    if (fatora > fatorb)
    {
        return(fatora);
    }
    else{
        return(fatorb);
    }
    
}
 
int main() {
    double ladoa, ladob, ladoc, A, B, C, A2, B2, C2;
    scanf("%lf %lf %lf",&ladoa,&ladob,&ladoc);
    A = max(ladoa, max(ladob, ladoc));
    C = min(ladoa, min(ladob, ladoc));
    B = (ladoa+ladob+ladoc) - (A+C);

    A2 = A * A;
    B2 = B * B;
    C2 = C * C;

    //Não forma triângulo
    if (A >= (B+C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    //Triângulo retângulo
    else if (A2 == B2 + C2)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    //Triângulo obtusângulo
    else if (A2 > B2 + C2)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    //Triangulo acutangulo
    else if (A2 < B2 + C2)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    if (A == B && B != C)
    {
        printf("TRIANGULO ISOSCELES\n");     
    }
    else if (A == C && B != C)
    {
        printf("TRIANGULO ISOSCELES\n"); 
    }
    else if (B == C && A != C)
    {
        printf("TRIANGULO ISOSCELES\n"); 
    }
    
    return 0;
}