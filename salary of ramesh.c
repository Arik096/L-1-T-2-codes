//  Arik Md Isthiaque
//  6 September-2016
// Seba Nir, CMH dhaka

// salary of ramesh
/*  Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary   */

#include<stdio.h>

void main()

{
          int a,b,c,d;

          printf("\tenter ramesh's basic salary\t");
          scanf("%d",&a);

          b=(a*40)/100;
          c=(a*20)/100;
          d=a+b+c;

          printf("\n\this total salary=%d\n",d);

}
