//  Arik Md Isthiaque
//  2 july-2016
//   Sheba Nir ,CMH dhaka

// salary of a worker

#include<stdio.h>

void main()

{
          int a,b,c,d,e;

          printf("\tenter the working hours of the worker\n\t");

          scanf("%d",&a);

          if(a<=40)
          {
                    b=a*200;
                    printf("\n\tthe worker will get 200tk per hour\n\t");
                    printf("\n\tso the total amount=%dtk\n\t",b);
          }
          else if(a==40)
          {
                    printf("\n\tthe worker will get 200tk per hour\n\tso the total amount is 8000tk\n\t");
          }
          else
          {
                    b=a-40;
                    c=b*300;
                    d=40*200;
                    e=c+d;

                    printf("\n\the worker will get 200tk per hour for the 1st 40 hours\n\t");

                    printf("\n\tfor extra hours he will get 300tk per hour\n\t");

                    printf("\n\tso the total amount=%dtk\n\t",e);
          }
}

