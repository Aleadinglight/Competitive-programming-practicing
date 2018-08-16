#include <stdio.h>
#include <algorithm>

using namespace std;
int m,b;
int main()
{
    scanf("%i %i",&m,&b);
    int x=0, y=-x/m+b;
    long long T, ans=0;
    while (y>=0){
        T=1LL*y*(y+1)/2;
        T=1LL*(x+1)*T + 1LL*x*(x+1)/2*(y+1);
        ans=max(ans,T);
        x+=m;
        y=-x/m+b;
    }
    printf("%I64d",ans);
    return 0;
}
