#include <stdio.h>
#include <math.h>
 
int main() {
 
    int Casos, Dinheiro_Total, Ingredientes_Existentes, Tipos_Bolos, Quantidade_Maior = 0, Tamanho_Vetor, Valor_Receita = 0, Bolos_Possiveis;
    
    scanf("%d",&Casos);
    
    for (int i = 0; i < Casos; i++)
    {
        Quantidade_Maior = 0;
        scanf("%d %d %d",&Dinheiro_Total, &Ingredientes_Existentes, &Tipos_Bolos);
    
        int  Vetor_Valor[Ingredientes_Existentes];
    
        for (int i = 0; i < Ingredientes_Existentes; i++)
        {
            scanf("%d",&Vetor_Valor[i]);
        }
    
        for (int i = 0; i < Tipos_Bolos; i++)
        {
            int Quantidade_Ingredientes_Atual;
            scanf("%d",&Quantidade_Ingredientes_Atual);
            Tamanho_Vetor = Quantidade_Ingredientes_Atual*2;
    
            int Vetor_Receita_Atual[Tamanho_Vetor];
        
            for (int i = 0; i < Tamanho_Vetor; i++)
            {
                scanf("%d",&Vetor_Receita_Atual[i]);
            }
        
            Valor_Receita = 0;
            for (int i = 0; i < Tamanho_Vetor; i = i + 2)
            {
                int indice_ingrediente = Vetor_Receita_Atual[i];
                int quantidade = Vetor_Receita_Atual[i + 1];
                Valor_Receita = Valor_Receita + Vetor_Valor[indice_ingrediente] * quantidade;
            }
        
            Bolos_Possiveis = Dinheiro_Total/Valor_Receita;
        
            if (Bolos_Possiveis > Quantidade_Maior)
            {
                Quantidade_Maior = Bolos_Possiveis;
            }
            Bolos_Possiveis = 0;
        
        }
        printf("%d\n",Quantidade_Maior);
    }
    
 
    return 0;
}