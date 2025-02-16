#include <stdio.h>

double MediaPonderada(double valor1, double valor2, double valor3, double valor4){
    double media;
    media = ((valor1*0.2)+(valor2*0.3)+(valor3*0.4)+(valor4*0.1));
    return media;    
}
 
int main() {
    double nota1, nota2, nota3, nota4, media, exame, mediaexame;
    scanf("%lf %lf %lf %lf",&nota1,&nota2,&nota3,&nota4);
    media = MediaPonderada(nota1,nota2,nota3,nota4);
    if (media > 6.9)
    {
        printf("Media: %.1lf\nAluno aprovado.\n",media);
    }
    else if (media < 5)
    {
        printf("Media: %.1lf\nAluno reprovado.\n",media);
    }
    else
    {
        printf("Media: %.1lf\nAluno em exame.\n",media);
        scanf("%lf",&exame);
        mediaexame = (media + exame)/2;
        printf("Nota do exame: %.1lf\n", exame);
        if (mediaexame > 4.9)
        {
            printf("Aluno aprovado.\nMedia final: %.1lf\n",mediaexame);
        }
        else
        {
            printf("Aluno reprovado.\nMedia final: %.1lf\n",mediaexame);
        }
    }
 
    return 0;
}