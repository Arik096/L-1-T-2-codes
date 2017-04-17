#include<stdio.h>
int arik();
int main()
{

          {


    int d,m,y,a,b,c;
    printf("Enter Day:Month:Year");
    scanf("%d%d%d",&d,&m,&y);
    if(m==4||m==6||m==9||m==11)
    {
        if(d==29)
        {
            a=1;
            b=m+1;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,b,y);
        }
        else
        {
            a=d+2;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,m,y);
        }
    }
        else if(d==30)
        {
            a=2;
            b=m+1;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,b,y);
        }
        else
        {
            a=d+2;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,m,y);
        }
    }
    int m;
    if(m==1||m==3||m==5||m==7||m==8||m==10)
    {
              int d;
        if(d==31)
        {
                  int a,b,y;
            a=2;
            b=m+1;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,b,y);
        }
        else
        {
                  int a,y;
            a=d+2;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,m,y);
        }
    }
    int d;
         if(d==30)
        {
                  int a,b,y;
            a=1;
            b=m+1;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,b,y);
        }
        else
        {
int a,y;            a=d+2;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,m,y);
        }
    }

int arik()
{

int d,a,b,c,y,m;
    if(m==12)
      {
        if(d==31)
        {
            a=2;
            b=1;
            c=y+1;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,b,c);
        }
        else
        {
            a=d+2;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,m,y);
        }
         if(d==30)
        {
            a=1;
            b=1;
            c=y+1;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,b,c);
        }
        else
        {
            a=d+2;
            printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,m,y);
        }
      }
      if(m==2)
      {
          if((y%4==100)||(y%100==0)&&(y%400==0))
        {
        if(d==29)
            {
                a=2;
                b=m+1;
                printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,b,y);
            }
        else
            {
                a=d+2;
                printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,m,y);
            }
        }
        else if(d==28)
            {
                a=2;
                b=m+1;
                printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,b,y);
            }
        else
            {
                a=d+2;
                printf("The Date Following %d:%d:%d is %d:%d:%d",d,m,y,a,m,y);
            }
      }
      return 0;
}

