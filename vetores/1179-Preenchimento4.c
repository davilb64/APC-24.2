#include <stdio.h>
#define MAX_VETOR 15
 
int main() {
 
    int Impar[5], Par[5], Entrada[MAX_VETOR], Cont_Par = 0, Cont_Impar = 0;
    
    for (int i = 0; i < 5; i++)
    {
        Impar[i] = 0;
        Par[i] = 0;
    }
    
    for (int i = 0; i < 15; i++)
    {
        scanf("%d",&Entrada[i]);
        
        if (Entrada[i] % 2 == 0)
        {
            Par[Cont_Par] = Entrada[i];
            Cont_Par++;
        }
        else
        {
            Impar[Cont_Impar] = Entrada[i];
            Cont_Impar++;
        }
        
        if (Cont_Impar == 5)
        {
            Cont_Impar = 0;
            for (int i = 0; i < 5; i++)
            {
                printf("impar[%d] = %d\n",i,Impar[i]);
                Impar[i] = 0;
            }
            
        }
        
        if (Cont_Par == 5)
        {
            Cont_Par = 0;
            for (int i = 0; i < 5; i++)
            {
                printf("par[%d] = %d\n",i,Par[i]);
                Par[i] = 0;
            }
            
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (Impar[i] == 0)
        {
            break;
        }
        
        printf("impar[%d] = %d\n",i,Impar[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (Par[i] == 0)
        {
            break;
        }
        
        printf("par[%d] = %d\n",i,Par[i]);
    }
    
    
    

       return 0; 
}