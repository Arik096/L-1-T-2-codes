#include<stdio.h>
#include<math.h>

void main()

{
float x1,x2,y1,y2,d,e;

printf("x1=");
scanf("%f",&x1);

printf("y1=");
scanf("%f",&y1);

printf("x2=");
scanf("%f",&x2);

printf("y2=");
scanf("%f",&y2);

d=(3.1416*(pow((sqrt((pow((x1-x2),2))+(pow((y1-y2),2)))),2)));
printf("area=%.2f",d);

e=2*3.1416*(sqrt((pow((x1-x2),2))+(pow((y1-y2),2))));
printf("perameter=%.2f",e);
}
