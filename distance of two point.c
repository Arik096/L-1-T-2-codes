// Arik Md Isthiaque
// 21 septembar-2016
// CSE lab,baiust

//distance of two points

#include<stdio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,d;

printf("x1=");
scanf("%f",&x1);
printf("y1=");
scanf("%f",&y1);
printf("x2=");
scanf("%f",&x2);
printf("y2=");
scanf("%f",&y2);

d=sqrt((pow((x1-x2),2))+(pow((y1-y2),2)));
printf("d=%.2f",d);
}
