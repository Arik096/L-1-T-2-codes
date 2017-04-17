//  Arik Md Isthiaque
//  14 july-2016
//   Baiust hostel

//  Grocery Shop


#include<stdio.h>

void main()

{
          //for printing the table
          printf("\n\tGrocery Shop");
          printf("\n\n\n");
          printf("\tSerial");
          printf("\tproduct");
          printf("\tPrice");
          printf("\n\n");
          printf("\t1");
          printf("\tPotato");
          printf("\t20");
          printf("\n");
          printf("\t2");
          printf("\tTomato");
          printf("\t200");
          printf("\n");
          printf("\t3");
          printf("\tRice");
          printf("\t50");
          printf("\n");
          printf("\t4");
          printf("\tDal");
          printf("\t160");
          printf("\n\n\n");

          //main code starts

          int serial,quantity,price;

          printf("\tenter your product no.");
          scanf("%d",&serial);

          if(serial==1)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Potato",quantity);
           printf("\n\n\tit will take 20tk per kg");

           price=quantity*20;

           printf("\n\n\ttotal price=%d\n\n\t",price);
          }
          else if(serial==2)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Tomato",quantity);
           printf("\n\n\tit will take 200tk per kg");

           price=quantity*200;

           printf("\n\n\ttotal price=%d\n\n\t",price);
          }
          else if(serial==3)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Rice",quantity);
           printf("\n\n\tit will take 50tk per kg");

           price=quantity*50;

           printf("\n\n\ttotal price=%d\n\n\t",price);
          }
          else if(serial==4)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Dal",quantity);
           printf("\n\n\tit will take 160tk per kg");

           price=quantity*160;

           printf("\n\n\ttotal price=%d\n\n\t",price);
          }
          else
          {
                    printf("\n\tsorry,we are out of stock");
          }
}
