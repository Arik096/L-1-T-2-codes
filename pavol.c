#include<stdio.h>
int main()
{
     int n;
     printf("enter youe num=");
     scanf("%d",&n);
      if(n>100 || n<0)
            {
                printf("\n\tERROR");
            }
     else if(n>=80 && n<100)
     {
         printf("\n\tYOU GET A+ ");
     }
     else if(n>=75 && n<80)
     {
          printf("\n\tYOU GET A ");
     }
     else if(n>=70 && n<75)
     {
          printf("\n\tYOU GET A- ");
     }
     else if(n>=65 && n<70)
     {
          printf("\n\tYOU GET B+ ");
     }
     else if(n>=60 && n<65)
     {
          printf("\n\tYOU GET B ");
     }
     else if(n>=55 && n<60)
     {
          printf("\n\tYOU GET B- ");
     }
     else if(n>=50 && n<55)
     {
          printf("\n\tYOU GET C+ ");
     }
     else if(n>=45 && n<50)
     {
          printf("\n\tYOU GET C  ");
     }
     else if(n>=40 && n<45)
     {
          printf("\n\tYOU GET D ");
     }
     else if(n<40 && n>=0)
     {
          printf("\n\tYOU GET f");
     }
      return 0;
}

