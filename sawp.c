#include<stdio.h>
void main()
{
    int a,b,c;
    printf("blue_box=");
    scanf("%d",&a);
    printf("red_box=");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("blue_box=%d\nred_box=%d",a,b);
}
