//  Arik Md Isthiaque
// june 26,2016
//  baiust hostel

//reverse of a 1 digit,2digit & 3digit num with if else condition

#include<stdio.h>

void main()

{
          int a,b,c,d,e;

          printf("\tenter ur num\t");
          scanf("%d",&a);

          if(a>0 && a<10)
          {
                    printf("\n\treverse num is %d\t\n",a);
          }
          else if(a>10 && a<100)
          {
                    b=a%10;
                    c=a/10;

                    printf("\n\treverse is %d%d\t\n",b,c);
          }
          else if(a>100 && a<1000)
          {
                    b=a%10;
                    e=a%100;
                    c=e/10;
                    d=a/100;

                    printf("\n\treverse num is %d%d%d\t\n",b,c,d);
          }
          else
          {
                    printf("\n\twrong input .plz input a num below 1000\n\t");
          }
}
