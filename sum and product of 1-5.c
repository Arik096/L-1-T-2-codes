// Arik Md Isthiaque
// 27-septembar-2016
// baiust hostel

// simple quiz using for loop and if else

#include<stdio.h>

void main()
{
         int ans,count;

        x: for(count=1;count<20;count=count+1)
         {
                   printf("what is the ans of %d+%d\n",count,count);
                   scanf("%d",&ans);

                   if(ans==count)
                   {
                             printf("you are right\n");

                             goto x;
                   }
                   else
                   {
                             printf("you are wrong\n");

                             goto x;
                   }
         }
}
