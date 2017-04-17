#include<iostream>
using namespace std;
int main()
{
    int t,holy,i,dd  ;
    string mon,day;

    cin>>t;
    if(t>0&&t<=50)
    {
        for(int k=0;k<t;k++)
        {
            holy=0;
            cin>>mon>>day;
            if(mon=="JAN"||mon=="MAR"||mon=="MAY"||mon=="JUL"||mon=="AUG"||mon=="OCT"||mon=="DEC")
            {
                i=31;
            }
            else if(mon=="APR"||mon=="JUN"||mon=="SEP"||mon=="NOV")
            {
                i=30;
            }
            else
            {
                i=28;
            }
            if(day=="SAT")
            {
                dd=1;
            }
            else if(day=="SUN")
            {
                dd=2;
            }
            else if(day=="MON")
            {
                dd=3;
            }
            else if(day=="TUE")
            {
                dd=4;
            }
            else if(day=="WED")
            {
                dd=5;
            }
            else if(day=="THU")
            {
                dd=6;
            }
            else if(day=="FRI")
            {
                dd=7;
            }
            for(int j=dd;j<=dd+j;j++)
            {
                if(j%7==0)
                    {
                        holy++;
                    }
            }
            cout<<holy<<endl;


        }

    }
}
