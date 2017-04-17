//  Arik Md Isthiaque
//  2 july-2016
//   Sheba Nir ,CMH dhaka

// probation of a student

#include<stdio.h>

void main()

{
          float a;

          printf("\tenter ur CGPA\n\t");

          scanf("%f",&a);

          if(a==2.00)
          {
          printf("\n\the is too close\n\t");
          }
          else if(a<=2.00)
          {
          printf("\n\the is in probation\n\t");
          }
          else
          {
          printf("\n\tnot in probation,good result\n\t");
          }
}
