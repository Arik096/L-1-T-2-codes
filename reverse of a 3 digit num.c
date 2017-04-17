//  Arik Md Isthiaque
// june 26,2016
//  baiust hostel

//reverse of a 3 digit num

#include<stdio.h>

void main()

{
          int a,b,c,d,e;

          printf("\tenter ur num\t");
          scanf("%d",&a);

          b=a%10;
          e=a%100;
          c=e/10;
          d=a/100;

          printf("\n\treverse num is %d%d%d\n",b,c,d);
}

