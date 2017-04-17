#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,y1,y2,area,l;

    printf("x1=");
    scanf("%f",&x1);
    printf("y1=");
    scanf("%f",&y1);
    printf("x2=");
    scanf("%f",&x2);
    printf("y2=");
    scanf("%f",&y2);

    l=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    area=pow(l,2);

    printf("length=%.2f\narea=%.2f",l,area);
}
