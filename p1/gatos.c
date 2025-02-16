#include <stdio.h>
 
int main() {
 
    int Gatos, Largura, Altura, Area, GatosFora;
    scanf("%d %d %d",&Gatos,&Largura,&Altura);
    Area = Largura * Altura;
    if (Gatos <= Area)
    {
        printf("%d 0\n", Gatos);
    }
    else
    {
        GatosFora = Gatos - Area;
        printf("%d %d\n",Area, GatosFora);
    }
    
    
 
    return 0;
}