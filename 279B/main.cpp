#include <stdio.h>
#include <algorithm>
using namespace std;

int tg[100100],a[100100],n,t,maxx   ;

void input()
{
    //freopen("input.inp","r",stdin);
    scanf("%i %i",&n,&t);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
}

void init()
{
    for (int i=1;i<=n;i++)
        tg[i]=tg[i-1]+a[i];
}

void xuli()
{
    input();
    init();
    maxx=0;
    int l=1;
    int r=1;
    while (l<=n)
    {
        while (r+1<=n && tg[r+1]-tg[l-1]<=t)
            r++;
        if (tg[r]-tg[l-1]<=t)
            maxx = max(maxx,r-l+1);
        l++;
    }
    printf("%i",maxx);
}

void tao()
{
    freopen("input.inp","w",stdout);
    printf("100000 1000000000\n");
    for (int i=1;i<=100000;i++)
        printf("10000 ");
}

int main()
{
    xuli();
    //tao();
    return 0;
}
