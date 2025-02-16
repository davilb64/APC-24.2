#include <stdio.h>
 
int main() {
 
    int Total_Album, Total_Carimbadas, Figurinhas_Compradas, Faltantes;
    scanf("%d", &Total_Album);
    scanf("%d", &Total_Carimbadas);
    scanf("%d", &Figurinhas_Compradas);
    
    Faltantes = Total_Carimbadas;
    
    int Vetor_Carimbadas[Total_Album];
    
    // Zerar Vetor Carimbadas
    for (int j = 0; j < Total_Album; j++) {
        Vetor_Carimbadas[j] = 0;
    }
    
    // Analisar as carimbadas
    for (int i = 0; i < Total_Carimbadas; i++) {
        int Pos_Carimbada;
        scanf("%d", &Pos_Carimbada);
        Vetor_Carimbadas[Pos_Carimbada - 1]++; // Ajustar índice
    }
    
    int Vetor_Compradas[Total_Album];
    
    // Zerar Vetor Compradas
    for (int j = 0; j < Total_Album; j++) {
        Vetor_Compradas[j] = 0;
    }
    
    // Analisar as compradas
    for (int i = 0; i < Figurinhas_Compradas; i++) {
        int Pos_Comprada;
        scanf("%d", &Pos_Comprada);
        
        if (Vetor_Compradas[Pos_Comprada - 1] == 0) { // Ajustar índice
            Vetor_Compradas[Pos_Comprada - 1]++;
        }
    }
    
    for (size_t i = 0; i < Total_Album; i++) {
        if (Vetor_Carimbadas[i] > 0 && Vetor_Compradas[i] > 0) {
            Faltantes--;
        }
    }
    
    printf("%d\n", Faltantes);
 
    return 0;
}
