//  Arik Md Isthiaque
// june 6,2016
//  baiust hostel

//  A program on using arithmetic operations

#include<stdio.h>
#include<math.h>

 void main()

 {
           int a,b,sum,sub,multi,div,reminder;

           printf("enter 2 value a & b");

           scanf("%d%d",&a,&b);

           sum=a+b;
           sub=a-b;
           multi=a*b;
           div=a/b;
           reminder=a%b;

           printf("sum=%d\nsub=%d\nmulti=%d\ndiv=%.2f\nreminder=%d",sum,sub,multi,div,reminder);



 }
