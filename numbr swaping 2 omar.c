//   Arik Md Isthiaque
//  2 july-2016
//  Sheba Nir, CMH dhaka


//numbr swaping 2

#include<stdio.h>

void main()

{
          int a,b,c,d,e;

          printf("\n\tgive ur input\n\t");

           printf("\n\ta=");
           scanf("%d",&a);

           printf("\n\tb=");
           scanf("%d",&b);

           printf("\n\tc=");
           scanf("%d",&c);

           d=a;
           a=b;
           e=b;
           b=c;
           c=d;

           printf("\n\tafter exchange:\n\t");

           printf("\n\ta=%d\n\t",a);
           printf("\n\tb=%d\n\t",b);
           printf("\n\tc=%d\n\t",c);
}
