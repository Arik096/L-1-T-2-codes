#include<stdio.h>
#include<string.h>

const long long mod=10000007;

int namespace;

struct Matrix
{
          long long m[7][7];
};
Matrix E,B;
int a[7];

void lnit()
{
          int i,j;
          for(i=1;i,=6;i++)
          for(j=1;j<=6;j++)
          {
                    E.m[i][j]=(i==j);
                    B.m[i][j]=0;
          }
          for(i=1;i<=6;i++)
                    B.m[i][j]=1;
          for(i=1;i<=5;i++)
                    B.m[i][i+1]=1;
          Matrix Multi(Matrix A,Matrix B,int M,int N,int K)
}
Matrix ans;
for(i=1;i<=M;i++)
          for(j=1;j<=N;j++)
{
          ans.m[i][j]=0;
          int k;
          for(k=1;k<=K;k++)
          {
                    ans.m[i][j]=(ans.m[i][j]+((A.m[i][k]%mod)*(B.m[k][j])%mod))%mod;
          }
}
return ans;
Matrix Poe(Matrix A,int k)
{
          Matrix ans=E;
          while(k)
          {
                    if(k&1)
                    {
                              k--;
                              ans=Multi(ans,A,6,6,6);
                    }
                    else
                    {
                              k/=2;
                              A=Multi(A,A,6,6,6);
                    }
          }
          return ans;
          int main()
          {
                    int t;
                    scanf("%d",&t);
                    lnit();
                    int ii;
                    for(ii=1;ii<=t;ii++)
                    {
                              int n;
                              Matrix D;
                              for(i=1;i<=6;i++)
                              {
                                        scanf("%d",&a[i]);
                                        D.m[1][7-i]=a[i];
                              }
                              scanf("%d",&n);
                              printf("Case %d:",ii);
                              if(n<6)
                                        printf("%d\n",a[n+1]%mod);
                              else
                              {
                                        n=-5;
                                        Matrix ans=Multi(D,Pow(B,n),1,6,6);
                                        printf("%lld\n",ans.m[1][1]%mod);
                              }
                    }
          }
}
return 0;
