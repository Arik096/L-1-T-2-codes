#include<stdio.h>
 void main()
 {

           int a[4];

           scanf("%d%d",&a[1],&a[2]);
           //scanf("%d",&a[2]);
           a[0]=a[1]+a[2];

           printf("%d + %d = %d",a[1],a[2],a[0]);

 }
