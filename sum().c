#include<stdio.h>
int sum(int x,int y);
void main()
{
    int x,y;
    printf("enter your two numbers");
    scanf("%d%d",&x,&y);
    sum(x,y);
    int sum();
}
int sum(int x,int y)
{
    printf("%d\n",x+y);
    return 0;
}
