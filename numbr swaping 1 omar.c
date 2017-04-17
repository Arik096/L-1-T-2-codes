//   Arik Md Isthiaque
//  2 july-2016
//  Sheba Nir, CMH dhaka


//numbr swaping 1


#include<stdio.h>

void main()

{
          int a,b,c;

          printf("\n\tgive ur input\n\t");

          printf("\n\ta=");
          scanf("%d",&a);

          printf("\n\tb=");
          scanf("%d",&b);

          c=b;
          b=a;
          a=c;

          printf("\n\tafter exchange:\n\t");

          printf("\n\ta=%d\n\t",a);
          printf("\n\tb=%d\n\t",b);
}
