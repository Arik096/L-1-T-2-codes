//  Arik Md Isthiaque
//  30 june-2016
//   Sheba Nir,dhaka CMH

//  calculator with eqntion

#include<stdio.h>

void main()

{


          int a,b,c;
          char ch;

          printf("\tenter ur eqntion\n\t");

          scanf("%d%c%d",&a,&ch,&b);

          if(ch=='+')
          {
                    c=a+b;
                    printf("\n\t%d%c%d=%d",a,ch,b,c);
          }

          else if(ch=='-')
          {
                    c=a-b;
                    printf("\n\t%d%c%d=%d",a,ch,b,c);
          }
          else if(ch=='*')
          {
                    c=a*b;
                    printf("\n\t%d%c%d=%d",a,ch,b,c);
          }
          else if(ch=='/')
          {
                    c=a/b;
                    printf("\n\t%d%c%d=%d",a,ch,b,c);
          }
          else if(ch=='%')
          {
                    c=a%b;
                    printf("\n\t%d%c%d=%d",a,ch,b,c);
          }
          else
          {
                    printf("\n\n\twrong input");
          }

}
