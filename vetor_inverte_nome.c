#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
  char NCstr[50];
  char PstrA[50];
  char UstrB[50];
  int i,x ,j=0;

  printf(" \n\n Informe a string nome: ");
  gets(NCstr);

  for(i=0;NCstr[i]!=' ';i++)
  {
    PstrA[i]=NCstr[i];
  }
    PstrA[i]='\0';

    printf(" \n\n Primeiro Nome..........%s ", PstrA);

    printf("\n\n");

  for((x=strlen(NCstr)-1);NCstr[x]!=' ';x--,j++)
  {

    UstrB[j]= NCstr[x];
  }
    UstrB[j]='\0';
    strrev(UstrB);
    printf("\n\n Ultimo Nome.............%s ", UstrB);

    printf("\n\n");
    printf(" \n\n Nome invetido..........%s,%s ",UstrB ,PstrA);

    getch();
}

/*Implemente um programa que receba um nome completo
e apresente apenas o último nome e o 1º nome na
 seguinte forma: último, 1º nome.

Exemplo: Rafael Paes Oliveira

Saída: Oliveira, Rafael*/
