#include <stdio.h>
#include <locale.h>

int main()
{
    int matA[5][5]={30,37,30,50,40,25,15,20,9,10,21,7,6,3,4,8,12,18,22,26,43,53,56,57,58};
    int vetB[5];

    int  il,ic;



    for(il=0; il<5; il++)
    {
        for(ic=0; ic<5; ic++)
        {
          printf(" %2d ",matA[il][ic]);
        }

        printf("\n\n");
    }
    printf("vetB = ");
    for(il=0; il<5; il++)
    {
     for(ic=0; ic<5; ic++)
       {
         if(il==ic)
        {
          vetB[ic]= matA[il] [ic];
          printf(" %d ",vetB[ic]);
        }

       }
    }
     getch();

}
