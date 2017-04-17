//   Arik Md Isthiaque
//  2 july-2016
//  Sheba Nir, CMH dhaka


//numbr swaping 3

#include<stdio.h>

void main()

{
          int a,b,c,d,e,f,g;

          printf("\n\tgive ur input\n\t");

          printf("\n\ta=");
          scanf("%d",&a);

          printf("\n\tb=");
          scanf("%d",&b);

          printf("\n\tc=");
          scanf("%d",&c);

          printf("\n\td=");
          scanf("%d",&d);

          e=a;
          a=d;
          f=b;
          b=e;
          g=c;
          c=f;
          d=g;

          printf("\n\tafter exchnge\n\t");

          printf("\n\ta=%d\n\t",a);
          printf("\n\tb=%d\n\t",b);
          printf("\n\tc=%d\n\t",c);
          printf("\n\td=%d\n\t",d);
}
