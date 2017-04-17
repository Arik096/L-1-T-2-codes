//  Arik Md Isthiaque
// 13 june-2016
//  baiust hostel

//a program on entering password

#include <stdio.h>
#include<unistd.h>

void main()
{
  char code;

  printf("\tEnter your code:");

  while( (code=getch() ) !='5')

        printf("*",code);

  }
