#include <stdio.h>
#include <algorithm>
using namespace std;

int n,m,x1,s,k;
long long minn;
struct bang{
    int x,y;
};
bang a[200100],b[200100];

void input()
{
    //freopen("input.inp","r",stdin);
    scanf("%i %i %i",&n,&m,&k);
    scanf("%i %i",&x1,&s);

    for (int i=1;i<=m;i++)
        scanf("%i",&a[i].x);
    for (int i=1;i<=m;i++)
        scanf("%i",&a[i].y);

    for (int i=1;i<=k;i++)
        scanf("%i",&b[i].x);
    for (int i=1;i<=k;i++)
        scanf("%i",&b[i].y);
}

int tim(int f)
{
    int tmp=s-f;
    if (tmp<0)
        return -1;
    int l=0,r=k,mid;
    while (l<=r)
    {
        mid=(l+r)/2;
        if (b[mid].y<=tmp)
            if (mid<k && b[mid+1].y<=tmp)
                l=mid+1;
            else
                return mid;
        else
            r=mid-1;
    }
    return -1;
}

void xuli()
{
    int id;
    minn = 1LL*n*x1;
    a[0].x=x1;
    a[0].y=0;
    for (int i=0;i<=m;i++){
        id = tim(a[i].y);
        if (id>-1){
            long long ngoc;
            ngoc = 1LL*(1LL*(n-b[id].x)*a[i].x);
            minn = min( ngoc, minn);
        }
    }
    printf("%I64d",minn);
}

int main()
{
    input();
    xuli();
    return 0;
}
