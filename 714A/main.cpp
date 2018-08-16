#include <stdio.h>
#include <algorithm>
using namespace std;
long long a,b,c,d,k;
void input()
{
    freopen("","r",stdin);
    scanf("%I64d %I64d %I64d %I64d %I64d",&a,&b,&c,&d,&k);
}

void xuli()
{
    long long t;
    if ((k>= max(a,c)) && (k<=min(b,d)) )
        k=0;
    else
        k=1;
    t=min(b,d)- max(a,c);
    if (t<0)
        printf("0");
    else
        printf("%I64d",t+k);

}

int main()
{
    input();
    xuli();
    return 0;
}
