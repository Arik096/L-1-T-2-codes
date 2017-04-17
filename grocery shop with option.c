//  Arik Md Isthiaque
//  17 july-2016
//   Baiust hostel

//  Grocery Shop with many product


#include<stdio.h>

void main()

{
          //for printing the table
          printf("\tGrocery Shop\n");
          printf("\t=============\n");
          printf("\n\tMenu:");
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

          int serial,quantity,price1,bill;
          char ch;

          printf("\tenter your product no.");
          scanf("%d",&serial);

          //condition starts
          if(serial==1)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Potato",quantity);
           printf("\n\n\tit will take 20tk per kg");

           price1=quantity*20;

           printf("\n\n\ttotal price=%d\n\n\t",price1);
          }
          else if(serial==2)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Tomato",quantity);
           printf("\n\n\tit will take 200tk per kg");

           price1=quantity*200;

           printf("\n\n\ttotal price=%d\n\n\t",price1);
          }
          else if(serial==3)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Rice",quantity);
           printf("\n\n\tit will take 50tk per kg");

           price1=quantity*50;

           printf("\n\n\ttotal price=%d\n\n\t",price1);
          }
          else if(serial==4)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Dal",quantity);
           printf("\n\n\tit will take 160tk per kg");

           price1=quantity*160;

           printf("\n\n\ttotal price=%d\n\n\t",price1);
          }
          else
          {
                    printf("\n\tsorry,we are out of stock\n");
          }

          //option starts
          //option 1
          printf("\n\tdo want more product(y/n)");
          ch=getche();

          if(ch=='y')
          {
          int serial,quantity,price2;
          char ch;

          printf("\tenter your product no.");
          scanf("%d",&serial);

          if(serial==1)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Potato",quantity);
           printf("\n\n\tit will take 20tk per kg");

           price2=quantity*20;

           printf("\n\n\ttotal price=%d\n\n\t",price2);
          }
          else if(serial==2)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Tomato",quantity);
           printf("\n\n\tit will take 200tk per kg");

           price2=quantity*200;

           printf("\n\n\ttotal price=%d\n\n\t",price2);
          }
          else if(serial==3)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Rice",quantity);
           printf("\n\n\tit will take 50tk per kg");

           price2=quantity*50;

           printf("\n\n\ttotal price=%d\n\n\t",price2);
          }
          else if(serial==4)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Dal",quantity);
           printf("\n\n\tit will take 160tk per kg");

           price2=quantity*160;

           printf("\n\n\ttotal price=%d\n\n\t",price2);
          }
          else
          {
                    printf("\n\tsorry,we are out of stock\n");
          }

          //option 2
          printf("\n\tdo want more product(y/n)");
          ch=getche();

          if(ch=='y')
          {
          int serial,quantity,price3;
          char ch;

          printf("\tenter your product no.");
          scanf("%d",&serial);

          if(serial==1)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Potato",quantity);
           printf("\n\n\tit will take 20tk per kg");

           price3=quantity*20;

           printf("\n\n\ttotal price=%d\n\n\t",price3);
          }
          else if(serial==2)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Tomato",quantity);
           printf("\n\n\tit will take 200tk per kg");

           price3=quantity*200;

           printf("\n\n\ttotal price=%d\n\n\t",price3);
          }
          else if(serial==3)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Rice",quantity);
           printf("\n\n\tit will take 50tk per kg");

           price3=quantity*50;

           printf("\n\n\ttotal price=%d\n\n\t",price3);
          }
          else if(serial==4)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Dal",quantity);
           printf("\n\n\tit will take 160tk per kg");

           price3=quantity*160;

           printf("\n\n\ttotal price=%d\n\n\t",price3);
          }
          else
          {
                    printf("\n\tsorry,we are out of stock\n");
          }

          //option 3
          printf("\n\tdo want more product(y/n)");
          ch=getche();

          if(ch=='y')
          {
          int serial,quantity,price4;
          char ch;

          printf("\tenter your product no.");
          scanf("%d",&serial);

          if(serial==1)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Potato",quantity);
           printf("\n\n\tit will take 20tk per kg");

           price4=quantity*20;

           printf("\n\n\ttotal price=%d\n\n\t",price4);
          }
          else if(serial==2)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Tomato",quantity);
           printf("\n\n\tit will take 200tk per kg");

           price4=quantity*200;

           printf("\n\n\ttotal price=%d\n\n\t",price4);
          }
          else if(serial==3)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Rice",quantity);
           printf("\n\n\tit will take 50tk per kg");

           price4=quantity*50;

           printf("\n\n\ttotal price=%d\n\n\t",price4);
          }
          else if(serial==4)
          {
           printf("\n\tenter the product quantity:");
           scanf("%d",&quantity);
           printf("\n\tyou will take %dkg of Dal",quantity);
           printf("\n\n\tit will take 160tk per kg");

           price4=quantity*160;

           printf("\n\n\ttotal price=%d\n\n\t",price4);
          }
          else
          {
                    printf("\n\tsorry,we are out of stock\n");
          }

          //option 4
          printf("\n\tdo want more product(y/n)");
          ch=getche();

          //option 5
          //last option
          //ending codes starts
          //here result will out of stock
          //printing the bill part

          if(ch=='y')
          {
              printf("\n\tout of stock\n");

              //4 bill
                 bill=price1+price2+price3+price4;
                  printf("\n\ttotal bill=%d\n",bill);
          }

          }
          else
          {
                    //3 bill
                  bill=price1+price2+price3;
                  printf("\n\ttotal bill=%d\n",bill);
          }
          }
          else
          {
                    //2 bill
                  bill=price1+price2;
                  printf("\n\ttotal bill=%d\n",bill);
          }
          }
          else
          {
                    //1 bill
                  bill=price1;
                  printf("\n\ttotal bill=%d\n",bill);
          }

          //ending statement
          printf("\tthnaks for shopping\n");
}

