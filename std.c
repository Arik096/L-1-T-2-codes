//  Arik Md Isthiaque
//  09 june-2016
// CMH Sheba Nir,Dhaka Cantonment

//  student information

#include<stdio.h>

void main()

{

          int age;
          float gpa;
          char gender;

          gender='m';
          gender='f';

          printf("\tenter age & gpa & gender\n");

          scanf("%d%f%c",&age,&gpa,&gender);

          gender=getchar();

          printf("\tstudent information\n\tage=%d\n\tgpa=%.2f\n\tgender=%c\n",age,gpa,gender);

}
