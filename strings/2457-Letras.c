#include <stdio.h>
#include <string.h>

int main() {
    char Letra, Texto[1001];
    int Count = 0, Palavras = 0, Carac;
    double Perc;
    
    scanf("%c", &Letra);
    getchar();  
    scanf(" %[^\n]", Texto);
    
    Carac = strlen(Texto);
    
    for (int i = 0; i < Carac;) { 
        int ContemLetra = 0;  

        while (i < Carac && Texto[i] != ' ') {
            if (Texto[i] == Letra) {
                ContemLetra = 1;
            }
            i++;
        }

        if (ContemLetra == 1) {
            Count++;
        }

        Palavras++;

        while (i < Carac && Texto[i] == ' ') { 
            i++;
        }
    }

    Perc = ((double) Count / Palavras) * 100.0;

    printf("%.1lf\n", Perc);

    return 0;
}
