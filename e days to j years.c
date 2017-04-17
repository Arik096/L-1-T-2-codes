// Arik Md Isthiaque
// 27-septembar-2016
// baiust hostel

// using 2 two main fuction

#include<stdio.h>

void func1();   //prototype of 2nd main function
void func2();   // prototype of 3rd main function

void main()
{

          func1();

          printf("Isthiaque");
          // Isthiaque will print at last means at 3rd

}

void func1()
{
          func2();

          printf("Md\t");
          // Md will print at 2nd
}

void func2()
{
          printf("Arik\t");
          // Arik will print at 1st
}
