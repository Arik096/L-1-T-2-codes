#include<stdio.h>

int main()
{
          int t;
          scanf("%d",&t);
          while(t--)
          {
                    int n;
                    scanf("%d",&n);
                    int a=0,b=n;
                    if(n>10)
                              a=10,b=n-10;
                              printf("%d %d\n",a,b);
          }

}
