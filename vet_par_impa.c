#include <stdio.h>

int main()
{
    int tamPar, tamImpar, i, vetDigitado[6],vetPar[6],vetImpar[6];
    tamPar=0;
    tamImpar=0;

    for(i=0; i<6; i++)
    {
        printf("\nDigite o %d.o numero: ", i+1);
        scanf("%d%*c", &vetDigitado[i]);

        if(vetDigitado[i] % 2 == 0)
        {
            vetPar[i]=vetDigitado[i];
            tamPar++;
        }

        else
        {
            vetImpar[i]=vetDigitado[i];
            tamImpar++;
        }
    }
    printf("\nVetor Par:")
    ;
    for(i=0; i<tamPar; i++)
    {
        printf(" %d ", vetPar[i]);
    }
    printf("\nVetor Impar:");
    for(i=0; i<tamImpar; i++)
    {
        printf(" %d ", vetImpar[i]);
    }
    return 0;
}
