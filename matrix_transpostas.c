#include <stdio.h>
#include <locale.h>

int main()
{
    int matA[5][5]={30,37,30,50,40,
                    25,15,20,90,10,
                    21,07,06,03,04,
                    80,12,18,22,26,
                    43,53,56,57,58};
    int matB[5] [5];

    int  il,ic;

    printf("\n\n Matriz mae.........:");

    printf("\n\n");
    for(il=0; il<5; il++)
    {
        for(ic=0; ic<5; ic++)
        {
          printf(" %2d ",matA[il][ic]);
        }

        printf("\n\n");

    }
        printf("\n\n Matriz Transposta.........:");

        printf("\n\n");

     for(il=4; il>=0; il--)
      {
        for(ic=4; ic>=0; ic--)
        {
            matB[il][ic]=matA[il][ic];

            printf(" %2d ",matB[il][ic]);

        }

             printf("\n\n");
       }

     getch();


 return 0;
}
