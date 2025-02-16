#include <stdio.h>

int main (){
    int T,VM;
    double L;
    scanf("%d\n%d",&T,&VM);
    L = (T*VM)/12.0;
    printf("%.3lf\n",L);
    return 0;
}