#include <stdio.h>
#include <string.h>
#define MAX_SUB 100
#define MAX_SEQ 320

int main() {
    char Sub[MAX_SUB], Seq[MAX_SEQ];
    int Caso = 1, Tamanho_Sub, Tamanho_Seq, Pos_fim, Qtd_sub;

    while (scanf("%s %s", Sub, Seq) != EOF) {
        Tamanho_Seq = strlen(Seq);
        Tamanho_Sub = strlen(Sub);
        Pos_fim = -1;
        Qtd_sub = 0;

        for (int i = 0; i <= Tamanho_Seq - Tamanho_Sub; i++) { 
            if (Seq[i] == Sub[0]) {
                int j;
                for (j = 0; j < Tamanho_Sub; j++) {
                    if (Seq[i + j] != Sub[j]) {
                        break;
                    }
                }
                if (j == Tamanho_Sub) {
                    Qtd_sub++;
                    Pos_fim = i + 1;
                }
            }
        }
        
        if (Qtd_sub == 0) {
            printf("Caso #%d:\nNao existe subsequencia\n\n", Caso);
        } else {
            printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n", Caso, Qtd_sub, Pos_fim);
        }

        Caso++;
    }

    return 0;
}
