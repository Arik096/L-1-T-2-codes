//  Arik Md Isthiaque
//  2july-2016
//  Sheba Nir,CMH dhaka

//  determining a eqn value

#include<stdio.h>

void main()

{
          float s,l;

          printf("\n\tenter ur value\n\t");
          scanf("%f",&s);

          if(s<100)
          {
                    l=(3000-(125*(s*s)));

                    printf("\n\tans is %.2f\n\t",l);
          }
          else if(s>=100)
          {
                    l=(12000/(4+((s*s)/14900)));

                    printf("\n\tans is %.2f\n\t",l);
          }
}
