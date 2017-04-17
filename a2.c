#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    printf("enter your 2 digit");
    scanf("%f%f",&a,&b);

    c=pow(a,b);

    printf("result=%.2f",c);
}
