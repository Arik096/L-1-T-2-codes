//  Arik Md Isthiaque
//  2july-2016
//  Sheba Nir,CMH dhaka

//  max,min,avg of 10 course marks

#include<stdio.h>

void main()

{
          int a,b,c,d,e,f,g,h,i,j,avg;

          printf("\n\tenter ur course numbrs\n\t");

          printf("\n\tCSE101=");
          scanf("%d",&a);

           printf("\n\tCSE102=");
           scanf("%d",&b);

            printf("\n\tEEE163=");
          scanf("%d",&c);

           printf("\n\tEEE164=");
          scanf("%d",&d);

           printf("\n\tHUM101=");
          scanf("%d",&e);

           printf("\n\tHUM102=");
          scanf("%d",&f);

           printf("\n\tMAT141=");
          scanf("%d",&g);

           printf("\n\tMAT142=");
          scanf("%d",&h);

           printf("\n\tCHE101=");
          scanf("%d",&i);

           printf("\n\tCHE102=");
          scanf("%d",&j);

          avg=(a+b+c+d+e+f+g+h+i+j)/10;

          printf("\n\tavg of your numbr is %d\n\t",avg);

          if(a>b&&a>c&&a>d&&a>e&&a>f&&a>g&&a>h&&a>i&&a>j)
          {
                    printf("/n/t%d is max value/n/t",a);
          }
           else if(b>a&&b>c&&b>d&&b>e&&b>f&&b>g&&b>h&&b>i&&b>j)
          {
                    printf("/n/t%d is max value/n/t",b);
          }
              else if(c>a&&c>b&&c>d&&c>e&&c>f&&c>g&&c>h&&c>i&&c>j)
          {
                    printf("/n/t%d is max value/n/t",c);
          }
              else if(d>a&&d>b&&d>c&&d>e&&d>f&&d>g&&d>h&&d>i&&d>j)
          {
                    printf("/n/t%d is max value/n/t",d);
          }
              else if(e>a&&e>b&&e>c&&e>d&&e>f&&e>g&&e>h&&e>i&&e>j)
          {
                    printf("\n\t%d is max value\n\t",e);
          }
              else if(f>a&&f>b&&f>c&&f>d&&f>e&&f>g&&f>h&&f>i&&f>j)
          {
                    printf("\n\t%d is max value\n\t",f);
          }
              else if(g>a&&g>b&&g>c&&g>d&&g>e&&g>f&&g>h&&g>i&&g>j)
          {
                    printf("\n\t%d is max value\n\t",g);
          }
              else if(h>a&&h>b&&h>c&&h>d&&h>e&&h>f&&h>g&&h>i&&h>j)
          {
                    printf("\n\t%d is max value\n\t",h);
          }
              else if(i>a&&i>b&&i>c&&i>d&&i>e&&i>f&&i>g&&i>h&&i>j)
          {
                    printf("\n\t%d is max value\n\t",i);
          }
              else if(j>a&&j>b&&j>c&&j>d&&j>e&&j>f&&j>g&&j>h&&j>i)
          {
                    printf("\n\t%d is max value\n\t",j);
          }





          if(a<b&&a<c&&a<d&&a<e&&a<f&&a<g&&a<h&&a<i&&a<j)
          {
                    printf("\n\t%d is min value\n\t",a);
          }
           else if(b<a&&b<c&&b<d&&b<e&&b<f&&b<g&&b<h&&b<i&&b<j)
          {
                    printf("\n\t%d is min value\n\t",b);
          }
              else if(c<a&&c<b&&c<d&&c<e&&c<f&&c<g&&c<h&&c<i&&c<j)
          {
                    printf("\n\t%d is min value\n\t",c);
          }
              else if(d<a&&d<b&&d<c&&d<e&&d<f&&d<g&&d<h&&d<i&&d<j)
          {
                    printf("\n\t%d is min value\n\t",d);
          }
              else if(e<a&&e<b&&e<c&&e<d&&e<f&&e<g&&e<h&&e<i&&e<j)
          {
                    printf("\n\t%d is min value\n\t",e);
          }
              else if(f<a&&f<b&&f<c&&f<d&&f<e&&f<g&&f<h&&f<i&&f<j)
          {
                    printf("\n\t%d is min value\n\t",f);
          }
              else if(g<a&&g<b&&g<c&&g<d&&g<e&&g<f&&g<h&&g<i&&g<j)
          {
                    printf("\n\t%d is min value\n\t",g);
          }
              else if(h<a&&h<b&&h<c&&h<d&&h<e&&h<f&&h<g&&h<i&&h<j)
          {
                    printf("\n\t%d is min value\n\t",h);
          }
              else if(i<a&&i<b&&i<c&&i<d&&i<e&&i<f&&i<g&&i<h&&i<j)
          {
                    printf("\n\t%d is min value\n\t",i);
          }
              else if(j<a&&j<b&&j<c&&j<d&&j<e&&j<f&&j<g&&j<h&&j<i)
          {
                    printf("\n\t%d is min value\n\t",j);
          }

}
