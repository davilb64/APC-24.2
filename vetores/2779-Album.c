#include <stdio.h>
 
int main() {
 
    int Total_Album, Figurinhas_Compradas, Faltantes = 0;
    scanf("%d",&Total_Album);
    Total_Album++;
    
    int Vetor_Album[Total_Album];
    
    //zerar vetor
    for (int i = 0; i < Total_Album; i++)
    {
        Vetor_Album[i] = 0;
    }
    
    scanf("%d", &Figurinhas_Compradas);
    
    for (int i = 0; i < Figurinhas_Compradas; i++)
    {
        int Comprada_Atual;
        scanf("%d",&Comprada_Atual);
        if (Vetor_Album[Comprada_Atual] == 1)
        {
            
        }
        else
        {
            Vetor_Album[Comprada_Atual]++;
        }
    }
    
    for (int i = 0; i < Total_Album; i++)
    {
        if (Vetor_Album[i] == 0)
        {
            Faltantes++;
        }
        
    }
    Faltantes--;
    
    printf("%d\n",Faltantes);
 
    return 0;
}