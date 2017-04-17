//  Arik Md Isthiaque
//  30 june-2016
//   Sheba Nir,dhaka CMH

//  calculator with out char variable

#include<stdio.h>

void main()

{
      int a,b,c,d;

      printf("\tenter ur nums\n\t");

      scanf("%d%d",&a,&b);

      printf("\topertation menu\n\t1.sum\n\t2.sub\n\t3.multi\n\t4.div\n\t5.reminder\n\n\n\tenter ur choice\n\t");

      scanf("%d",&d);

            if(d==1)
      {
                c=a+b;
                printf("\tsum is=%d",c);
      }
      else if(d==2)
      {
              c=a-b;
              printf("\tsub is=%d",c);
      }
      else if(d==3)
      {
               c=a*b;
                printf("\tmulti is=%d",c);
      }
      else if(d==4)
      {
                 c=a/b;
                 printf("\tdiv is=%d",c);
      }
      else if(d==5)
      {
                 c=a%b;
                 printf("\treminder is=%d",c);
      }
      else
      {
                printf("\twrong input");
      }
}
