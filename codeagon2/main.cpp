#include <stdio.h>
#include <algorithm>
using namespace std;

struct bang{
    long long x;
    int y;
};
int c;
long long n,tg=0;
bang a[100];

bool sosanh(const bang &q, const bang &p)
{
    return ((q.y>p.y) || ((q.y==p.y) && (q.x<p.x)));
}

void xuli()
{
    int i=0;
    long long remain=n;
    while (remain>0 && i<c)
    {
        i=i+1;
        if (a[i].x<=remain){
            tg=tg+1LL*a[i].x*a[i].y;
            remain -= 1LL*a[i].x;
        }
        else
        {
            tg=tg+1LL*remain*a[i].y;
            remain=0;
        }
    }
}


int main()
{
    freopen("input.inp","r",stdin);
    scanf("%lld %i",&n,&c);
    for (int i=1;i<=c;i++)
        scanf("%lld %i",&a[i].x,&a[i].y);
    sort(a+1,a+1+c,sosanh);
    xuli();
    printf("%lld",tg);
    return 0;
}
