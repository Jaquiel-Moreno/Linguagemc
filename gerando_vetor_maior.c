#include <stdio.h>



int main()
{

  int vetA[25]={5,10,15,20,25,30,35,0,45,50,55,60,65,70,75,80,85,9,95,6,10,14,11,2,3};

  int vetB[25]={30,37,30,50,40,25,15,20,9,10,21,7,6,3,4,8,12,18,22,26,43,53,56,57,58};

  int vetC[50];

  int i,x=0;



  for(i=0;i<25;i++)
  {
       vetC[x]=vetA[i];
       x++;

       vetC[x]=vetB[i];
       x++;

 }
   printf("\n\n vetC ");
   for(i=0;i<50;i++)
  {
      printf(" %d ", vetC[i]);
  }

   getch();
   return 0;



}
