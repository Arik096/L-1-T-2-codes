#include <stdio.h>
int main()
{
          int t,i;
          scanf("%d",&t);
          for(i=1;i<=t;i++)
        {
                  char a[6],b[6];
                  scanf("%s",a);
                  fflush(stdin);
                  scanf("%s",b);

                 if((b=='THU'||b=='FRI')&&(a=='FEB'))
                 {
                           printf("5\n");
                 }
                 else
                 {
                 printf("4\n");
        }}

    return 0;
}
