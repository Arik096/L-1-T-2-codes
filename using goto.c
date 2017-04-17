// Arik Md Isthiaque
// 25 aeptembar-2016
// baiust hostel

// use of goto

#include<stdio.h>

void main()

{
          int arik[3];
          char ch[3];

          goto x;

          y: printf("%d,%d is arik main value\n",arik[0],arik[1]);

          goto z;

          x: arik[0]=12;
              arik[1]=222;

          ch[0]='d';
          ch[1]='r';

          goto y;

          z: printf("%c,%c is ch value\n",ch[0],ch[1]);
}
