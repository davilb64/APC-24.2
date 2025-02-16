#include <stdio.h>
#include <string.h>
 
int main() {
 
    int Quantidade, Forca;
    char Pessoa[1000001];
 
    scanf("%d",&Quantidade);
    
    for (int i = 0; i < Quantidade; i++)
    {
        scanf("%s",Pessoa);
        getchar();
        scanf("%d",&Forca);
        
        if (strcmp(Pessoa, "Thor") == 0)
        {
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    
    return 0;
}