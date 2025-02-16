#include <stdio.h>
#include <string.h>

struct Camiseta {
    char Nome[101];
    char Cor[10];
    char Tamanho;
};

typedef struct Camiseta camiseta;

void ordena(camiseta vetor[], int n) {
    camiseta temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(vetor[i].Cor, vetor[j].Cor) > 0) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            } else if (strcmp(vetor[i].Cor, vetor[j].Cor) == 0) {
                if (vetor[i].Tamanho < vetor[j].Tamanho) {
                    temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                } else if (vetor[i].Tamanho == vetor[j].Tamanho) {
                    if (strcmp(vetor[i].Nome, vetor[j].Nome) > 0) {
                        temp = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = temp;
                    }
                }
            }
        }
    }
}

int main() {
    int QuantidadeCamisetas, primeiroCaso = 1;
    
    while (1) {
        scanf("%d", &QuantidadeCamisetas);
        if (QuantidadeCamisetas == 0) {
            break;
        }
        
        camiseta VetorCamisetas[QuantidadeCamisetas];

        for (int i = 0; i < QuantidadeCamisetas; i++) {
            getchar();
            scanf("%[^\n]", VetorCamisetas[i].Nome);
            getchar();
            scanf("%s %c", VetorCamisetas[i].Cor, &VetorCamisetas[i].Tamanho);
        }

        ordena(VetorCamisetas, QuantidadeCamisetas);

        if (primeiroCaso != 1) {
            printf("\n");
        }
        primeiroCaso = 0;

        for (int i = 0; i < QuantidadeCamisetas; i++) {
            printf("%s %c %s\n", VetorCamisetas[i].Cor, VetorCamisetas[i].Tamanho, VetorCamisetas[i].Nome);
        }
    }

    return 0;
}
