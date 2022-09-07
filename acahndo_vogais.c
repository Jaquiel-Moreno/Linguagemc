#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    // variáveis
    char texto[50];              // vetor que recebe a entrada feita pelo usuário
    int i, j, contador=0;         // variáveis para controlar o loop principal, secundário e a quantidade de caracteres encontrados, respectivamente
    char vogais[] = "aeiouAEIOU"; // vetor de vogais

    // captura do texto que será digitado pelo usuário
    printf("Digite sua frase: ");
    gets(texto);

    // contagem de vogais da entrada feita pelo usuário
    int ContadorEspacos=0;

    for (i=0; i<strlen(texto); i++)
    {
        if (texto[i] == ' ')
            {
              ContadorEspacos++;
            }

        for (j=0; j<strlen(vogais); j++)
        {
            if (texto[i] == vogais[j])
            {
                contador++;
            }
        }
    }

    // exibição do número de vogais encontrados
       if (contador == 1)
        {
          printf("\n\no texto informado possui 1 vogal\n\n");
        }
    else
        {
           printf("\n\no texto informado possui %d  vogais e espacos branco %d\n\n", contador,ContadorEspacos);
        }

    return 0;
}
