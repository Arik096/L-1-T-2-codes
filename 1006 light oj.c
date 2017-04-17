#include <stdio.h>
#include <string.h>
#define maxn 10003
using namespace std;
long long fn[maxn];
int main() {
    int n, caseno = 0, cases,i;
    scanf("%d", &cases);
    while( cases-- ) {
     fn[6]=0;
     for (i=0;i<6;i++){
      scanf("%lld",&fn[i]); fn[i] = fn[i] % 10000007;
      fn[6]=(fn[6]+fn[i]) % 10000007;
     }
     scanf("%d",&n);
     for (i=7;i<=n;i++) fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6])% 10000007;
     //fn[i]=((2*fn[i-1]*10000007)-fn[i-7]) % 10000007;
        printf("Case %d: %lld\n", ++caseno, fn[n] );
    }
    return 0;
}
