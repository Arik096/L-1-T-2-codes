//  Arik Md Isthiaque
//  17 july-2016
//   Baiust hostel

//   leap year

#include<stdio.h>

void main()

{
          int a;

          printf("\tenter your year\t");
          scanf("%d",&a);

          if(a%4==0)
          {
                    printf("\n\tleap yera\n");
          }
          else if(a%100==0)
          {
                    printf("\n\tnot leap year\n");
          }
          else if(a%400==0)
          {
                    printf("\n\tleap year\n");
          }
          else
          {
                    printf("\n\tnot leap year\n");
          }


}
