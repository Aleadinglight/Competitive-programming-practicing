#include <iostream>
#include <algorithm>
using namespace std;

int n,m,k,MAX;
long long tg;

long long tinhcanh(int x, int y)
{
    if (x-1<y)
        return 1LL*x*(x-1)/2 + 1LL*(y-(x-1));

    return 1LL*(2*x-y-1)*y/2;
}

long long tinh(int x, int p, int q)
{
    tg=0;
    tg+= tinhcanh(x,q);
    tg+= tinhcanh(x,p);
    return tg;
}

int tim()
{
    int l=1;
    int r=MAX,x,maxx=1;
    int p=k-1, q=n-k;
    while (l<=r)
    {
        x = (l+r)/2;
        tg = tinh(x,p,q);
        if (tg<=m-x){
            maxx=x;
            l=x+1;
        }
        else
            r=x-1;
    }
    return maxx;
}

int main()
{
    cin>>n>>m>>k;
    MAX = 1e9/m+m/2;
    if (n==1)
    {
        cout<<m;
        return 0;
    }
    cout<<tim();
    return 0;
}
