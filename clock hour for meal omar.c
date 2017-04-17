//   Arik Md Isthiaque
//  2 july-2016
//  Sheba Nir, CMH dhaka


//  clock hour for meal

#include<stdio.h>

void main()

{
          int time;

          printf("\n\tenter ur time\n\t");
          scanf("%d",&time);

          if(time==4||time==5||time==6)
          {
                    printf("\n\tbreakfast time\n\t");
          }
          else if(time==12||time==13)
          {
                    printf("\n\tlunch time\n\t");
          }
          else if(time==16||time==17)
          {
                    printf("\n\tsnaks time\n\t");
          }
          else if(time==19||time==20)
          {
                    printf("/n/tdinner time\n\t");
          }
          else if(time==0||time==1||time==2||time==3||time==7||time==8||time==9||time==10||time==11||time==14||time==15||time==18||time==21||time==22||time==23)
          {
                    printf("\n\tpatience is a virtue\n\t");
          }
          else
          {
                    printf("\n\twrong time\n\t");
          }
}
