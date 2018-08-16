#include <stdio.h>
#include <algorithm>
using namespace std;

struct bang{
    int x,y;
};

bang a[100];

int n,k,g[100];

bool sosanh(const bang &p, const bang &q)
{
    return ((p.x>q.x) || ((p.x==q.x) && (p.y<q.y)));
}

void input()
{
    //freopen("input.inp","r",stdin);
    scanf("%i %i",&n,&k);
    for (int i=1;i<=n;i++)
        scanf("%i %i",&a[i].x,&a[i].y);

}

void init()
{
    sort(a+1,a+1+n,sosanh);
    g[1]=1;
    for (int i=2;i<=n;i++)
        if (a[i].x==a[i-1].x && a[i].y==a[i-1].y)
            g[i]=g[i-1]+1;
        else
            g[i]=1;

}

int tim(int k)
{
    while (a[k].x==a[k+1].x && a[k].y==a[k+1].y)
        k++;
    return g[k];
}

void xuli()
{
    printf("%i",tim(k));
}

int main()
{
    input();
    init();
    xuli();
    return 0;
}
