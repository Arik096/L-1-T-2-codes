//  Arik Md Isthiaque
//  july 2-2016
//  Sheba Nir,CMH dhaka

//  area of triangle

#include<stdio.h>
#include<math.h>

void main()

{
          float area,s,x,y,z;

          printf("\n\tenter the value of three sides\n\n\t");

          printf("x=");
          scanf("%f",&x);

          printf("\n\ty=");
          scanf("%f",&y);

          printf("\n\tz=");
          scanf("%f",&z);

          s=(x+y+z)/2;

          area=sqrt(s*(s-x)*(s-y)*(s-z));

          printf("\n\tarea=%.2f\n\t",area);
}
