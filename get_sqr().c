// Arik Md Isthiaque
// 27-septembar-2016
// baiust hostel

// used printf but the line never get printed
#include<stdio.h>

void func1();

void main()
{
func1();
}

void func1()
{
          printf("this line will get printed");

          return;

          printf("this line will never get printed");


}



