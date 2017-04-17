//   Arik Md Isthiaque
//  29 August-2016
//  Sheba Nir, CMH dhaka


//  Seconds 2 hours minutes seconds

#include<stdio.h>

void main()

{
          int a,b,c,d,e;

          printf("\t enter seconds \t");
          scanf("%d",&a);

          b=a/3600;
          c=a%3600;

          d=c/60;
          e=c%60;

          printf("\n \t %d seconds = %d hours %d minutes %d seconds \t \n",a,b,d,e);
}
