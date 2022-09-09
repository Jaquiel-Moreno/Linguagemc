#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{
    int vetA[6];
    int c,i=0;

    for(i=0;i<6;i++)
    {
     printf("Informe o numeros do vetA %d :", i + 1);
     scanf("%d", &vetA[i]);
     c++;
    }
      printf("\n\n");
      printf("vetA = ");
    for(c=0;c<6;c++)
    {
        printf(" %d ", vetA[c]);
    }
    printf("\n\n");
    printf("vetA = ");
    for(c=0;c<6;c++)
    {
        vetA[c]+=1;
        printf(" %d ", vetA[c]);
    }

    getch();
}
