#include <stdio.h>
 
int main() {
    int DiaInicial, HoraInicial, MinutoInicial, SegundoInicial, DiaFinal, HoraFinal, MinutoFinal, SegundoFinal, TempoSegundosInicio, TempoSegundosFinal, TempoSegundos, DiasFinais, HorasFinais, MinutosFinais, SegundosFinais;
    scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d",&DiaInicial,&HoraInicial,&MinutoInicial,&SegundoInicial,&DiaFinal,&HoraFinal,&MinutoFinal,&SegundoFinal);
    if (HoraFinal == HoraInicial && MinutoFinal == MinutoInicial && SegundoFinal == SegundoInicial)
    {
        DiasFinais = DiaFinal - DiaInicial;
        printf("%d dia(s)\n0 hora(s)\n0 minuto(s)\n0 segundo(s)\n",DiasFinais);
    }
    else{
        TempoSegundosInicio = (DiaInicial*86400) + (HoraInicial*3600) + (MinutoInicial*60) + (SegundoInicial);
        TempoSegundosFinal = (DiaFinal*86400) + (HoraFinal*3600) + (MinutoFinal*60) + (SegundoFinal);

        TempoSegundos = TempoSegundosFinal - TempoSegundosInicio;

        DiasFinais = TempoSegundos/86400;
        TempoSegundos = TempoSegundos%86400;
        HorasFinais = TempoSegundos/3600;
        TempoSegundos = TempoSegundos%3600;
        MinutosFinais = TempoSegundos/60;
        SegundosFinais = TempoSegundos%60;

        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",DiasFinais,HorasFinais,MinutosFinais,SegundosFinais);
    }
 
    return 0;
}