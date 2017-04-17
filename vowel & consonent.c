//Arik Md Isthiaque
//27 june-2016
//Baiust hostel

//define if a char is vowel or consonent

#include<stdio.h>

void main()

{
          char ch;

          printf("\tenter ur char\n\t");
          scanf("\t%c",&ch);

          if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
          {
                    printf("\tits vowel\n");
          }
          else
          {
                    printf("\tits consonent\n");
          }
}
