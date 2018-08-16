#include <stdio.h>
#include <algorithm>
using namespace std;

struct bang{
    int x,y,z;
};

int n,k,ans=0;

bang a[200010], b[200010];

void input()
{
    scanf("%i %i",&n,&k);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i].x);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i].y);
}

bool sosanh(const bang &q, const bang &p){
    return ((q.z<p.z) || ((q.z==p.z) && (q.x<p.x)));
}

void xuli()
{
    int d=0,i=1;
    while (i<=n)
    {
        if (a[i].x<=a[i].y)
        {
            d++;
            ans+=a[i].x;
            a[i].x=a[n].x;
            a[i].y=a[n].y;
            n--;
        }
        else
            i++;
    }

    if (d<k){
        for (int i=1;i<=n;i++)
        a[i].z=a[i].x-a[i].y;
        sort(a+1,a+1+n,sosanh);
        for (int i=1;i<=k-d;i++)
        {
            ans+=a[i].x;
        }
        for (int i=k-d+1;i<=n;i++)
        {
            ans+=a[i].y;
        }
    }
    else
        for (int i=1;i<=n;i++)
            ans+=a[i].y;
    printf("%i",ans);
}

int main()
{
    input();
    xuli();
    return 0;
}
