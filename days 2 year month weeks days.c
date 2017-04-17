//   Arik Md Isthiaque
//  29 August-2016
//  Sheba Nir, CMH dhaka


//  Days 2 years months weeks days

#include<stdio.h>

void main()

{
int a,b,c,d,e,f,g;

printf("\tenter days\t");
scanf("%d",&a);

b=a/365;
c=a%365;

d=c/30;
e=c%30;

f=e/7;
g=e%7;

printf("\n\t%d days = %d years %d months %d weeks %d days\t\n",a,b,d,f,g);

}

