//  Arik Md Isthiaque
//  19 june-2016
//BAIUST hostel


//max of three numbers

#include<stdio.h>

void main()

{
          int a,b,c;

          printf("\tenter ur 3 numbrs\t");

          scanf("%d%d%d",&a,&b,&c);

          if(a>b&&a>c)
          {
                    printf("\t%d is max the numbr\n",a);
          }
          if(b>a&&b>c)
          {
                    printf("\t%d is max the numbr\n",b);
          }
          if(c>a&&c>b)
          {
                    printf("\t%d is the max numbr\n",c);
;          }
}
