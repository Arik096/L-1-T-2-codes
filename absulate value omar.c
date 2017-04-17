//   Arik Md Isthiaque
//  2 july-2016
//  Sheba Nir, CMH dhaka


//  absulate value

#include<stdio.h>

void main()

{
          int a;

          printf("\n\tgive ur input\n\t");
          scanf("%d",&a);

          if(a<0)
          {
                    a=(-1*a);

                    printf("\n\tabsulate value is %d\n\t",a);
          }
          else
          {
                    printf("\n\tabsulate value %d\n\t",a);
          }
}
