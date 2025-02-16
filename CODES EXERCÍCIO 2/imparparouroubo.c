#include <stdio.h>
 
int main() {
    int EscolhaPlayer1, NumeroPlayer1, NumeroPlayer2, Roubo, Acusacao, Resultado;
    scanf("%d %d %d %d %d", &EscolhaPlayer1, &NumeroPlayer1, &NumeroPlayer2, &Roubo, &Acusacao);
    Resultado = (NumeroPlayer1 + NumeroPlayer2)%2;
    if (Roubo == 1 && Acusacao == 1)
    {
        printf("Jogador 2 ganha!\n");
    }
    else if (Roubo == 1 && Acusacao == 0)
    {
        printf("Jogador 1 ganha!\n");
    }
    else if (Roubo == 0 && Acusacao == 1)
    {
        printf("Jogador 1 ganha!\n");
    }
    else{
        if (((EscolhaPlayer1 == 1) && (Resultado == 0)) || ((EscolhaPlayer1 == 0) && (Resultado != 0)))
        {
            printf("Jogador 1 ganha!\n");
        }
        else
        {
            printf("Jogador 2 ganha!\n");
        }
        
    }
    
    

    return 0;
}