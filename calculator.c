//  Arik Md Isthiaque
// june 26,2016
//  baiust hostel

//Calculator

#include<stdio.h>

void main()
{

char ch;
int a,b,c;
float d,e,f;

printf("\tenter any of them +,-,*,/\t ");
scanf("%c",&ch);

if(ch=='+')
{
          printf("\n\tenter ur 2 numbrs\t");
          scanf("%d%d",&a,&b);

          c=a+b;

          printf("\n\tsum is %d\t",c);
}
else if(ch=='-')
{
          printf("\n\tenter ur 2 numbrs\n\t");
          scanf("%d%d",&a,&b);
          c=a-b;

          printf("\n\tsub is %d\n\t",c);
}
else if (ch=='*')
{
          printf("\n\tenter ur 2 numbrs\n\t");
          scanf("%d%d",&a,&b);
          c=a*b;

          printf("\n\tmulti is %d\n\t",c);
}
else if(ch=='/')
{
          printf("\n\tenter ur 2 numbrs\n\t");
          scanf("%f%f",&d,&e);

          f=d/e;

          printf("\n\tdiv is %.2f\n\t",f);
}

}
