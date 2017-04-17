#include <stdio.h>
int main()
{
    int n,i,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        scanf("%d%d",&p,&q);
        float r,s;
        r=p/10;
        s=q/6;
        if(r==s)
            {
            printf("Case %d: Proper Shape\n",i);
        }
        else
            {
            printf("Case %d: Improper Shape\n",i);
        }

    }
    return 0;
}
