#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int r,i,j,k;
    float q,pontos,contador;
    r=450;
    contador = 0;
    pontos = 0;

    for(i=-r; i<=r;i++)
        for(j=-r; j<=r;j++)
                if (abs(i)+abs(j)<=r){
                    pontos = pontos +1;
                    if ((i+j) %2 == 0)
                        contador = contador +1;}
    q = pontos/contador;
    printf(" %f pontos de Zn na bola \n ", pontos);
    printf("%f pontos de Dn na bola \n", contador);
    printf(" %f ", q);

    return 0;
}
