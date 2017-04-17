//  Arik Md Isthiaque
//  14 july-2016
//   Baiust hostel

//  password  confirming

#include<stdio.h>

void main()

{
          char a,b,c,d,e;
          char f,g,h,i,j;

          printf("\n\tenter your code:");

          a=getch();
          printf("*",a);

          b=getch();
          printf("*",b);

          c=getch();
          printf("*",c);

          d=getch();
          printf("*",d);

          e=getch();
          printf("*",e);

          printf("\n\tenter your code again:");

          f=getch();
          printf("*",f);

          g=getch();
          printf("*",g);

          h=getch();
          printf("*",h);

          i=getch();
          printf("*",i);

          j=getch();
          printf("*",j);

          if(a==f)
          {
                    if(b==g)
                    {
                              if(c==h)
                              {
                                        if(d==i)
                                        {
                                                  if(e==j)

                                                  {
                                                            printf("\n\tyour code is correct");
                                                  }
                                                  else
                                                  {
                                                            printf("\n\twrong code");
                                                  }
                                        }
                                        else
                                        {
                                                  printf("\n\twrong code");
                                        }
                              }
                              else
                              {
                                        printf("\n\twrong code");
                              }
                    }
                    else
                    {
                              printf("\n\twrong code");
                    }
          }
          else
          {
                    printf("\n\twrong code");
          }


}
