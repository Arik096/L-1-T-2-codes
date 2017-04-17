#include<stdio.h>
int func1();
int func2();
int func3();

int d,y,m;

int main()
{
          scanf("%d%d%d",&d,&m,&y);
          if(m==12&&d==31)
          {
                    func3();
          }
          else if(d==30&&(m==4||m==6||m==9||m==11))
          {
                    func2();
          }
          else if (d==31&&(m==1||m==3||m==5||m==7||m==8||m==10))
          {
                    func2();
          }
          else
          {
                    func1();
          }
          return 0;
}

int func1()
{
          d=d+1;
          printf("%d:%d:%d",d,m,y);
          return 0;
}

int func2()
{
          d=1;
          m=m+1;
          printf("%d:%d:%d",d,m,y);
          return 0;
}

int func3()
{
          d=1;
          m=1;
          y=y+1;
          printf("%d:%d:%d",d,m,y);
          return 0;
}
