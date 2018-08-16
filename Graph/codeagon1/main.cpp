#include <stdio.h>

using namespace std;
int n;
long long x,y,k,l;
int main()
{
    scanf("%lld %lld",&x,&y);
    scanf("%i",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld %lld",&k,&l);
        x=x-k;
        y=y-l;
    }
    printf("%lld %lld",x,y);
    return 0;
}
