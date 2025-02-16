#include <stdio.h>
 
int main() {
 
    int ValorN, ValorM, BoloN, EboloN, BoloS, EBoloS;
    BoloN = 0;
    BoloS = 0;
    EboloN = 0;
    EBoloS = 0;

    scanf ("%d %d",&ValorN, &ValorM);

    //Natan
    for (int i = 0; i < ValorN; i++)
    {
        scanf("%d", &BoloN);
        if (BoloN == 1)
        {
            EboloN++;
        }
    }

    //Samuel
    for (int i = 0; i < ValorN; i++)
    {
        scanf("%d", &BoloS);
        if (BoloS == 1)
        {
            EBoloS++;
        }
    }

    if (EboloN == ValorM)
    {
        printf("Tudo certo.\n");
    }
    else if (EboloN != ValorM && EBoloS == ValorM)
    {
        printf("Pegou de Samuel.\n");
    }
    else if (EboloN != ValorM && EBoloS != ValorM)
    {
        printf("Pegou de um estranho.\n");
    }
 
    return 0;
}