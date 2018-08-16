#include <stdio.h>
#include <algorithm>

using namespace std;

struct bang{
    int x,y;
};

int n,d;

long long tg[100100],maxx;

bang a[100100];

void input()
{
    //freopen("input.inp","r",stdin);
    scanf("%i %i",&n,&d);
    for (int i=1;i<=n;i++)
        scanf("%i %i",&a[i].x,&a[i].y);
}

bool sosanh(const bang &k, const bang &l)
{
    return ((k.x<l.x) || ((k.x==l.x) && (k.y<l.y)));
}

void init()
{
    sort(a+1,a+1+n,sosanh);
    tg[0]=0;
    for (int i=1;i<=n;i++)
        tg[i] = tg[i-1]+a[i].y;
}

int tim(int i)
{
    int tmp = a[i].x-d;
    int l=1,r=i,mid;
    while (l<=r)
    {
        mid = (l+r)/2;
        if (a[mid].x>tmp)
        {
            if (mid>1 && a[mid-1].x>tmp)
                r=mid-1;
            else
                return mid;
        }
        else
            l=mid+1;
    }
}

void BaoNgoc()
{
    int id;
    maxx=a[1].y;
    for (int i=2;i<=n;i++)
    {
        id = tim(i);
        maxx = max(maxx, tg[i]-tg[id-1]);
    }
    printf("%I64d",maxx);
}

void xuli()
{
    input();
    init();
    BaoNgoc();
}

void tao()
{
    freopen("input.inp","w",stdout);
    printf("100000 1000000000\n");
    for (int i=1;i<=100000;i++)
    {
        printf("0 1000000000\n");
    }
}

int main()
{
    xuli();
    //tao();
    return 0;
}
