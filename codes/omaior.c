#include <stdio.h>
#include<math.h>

int main (){
    int a,b,c,maior1,maiorf;
    scanf("%d %d %d",&a,&b,&c);
    maior1 = (a+b+fabs(a-b))/2;
    maiorf = (maior1+c+fabs(maior1-c))/2;

    printf("%d eh o maior\n",maiorf);

    return 0;
}