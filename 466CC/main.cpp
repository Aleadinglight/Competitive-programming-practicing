#include <stdio.h>
#include <algorithm>
using namespace std;
int n, a[600000];
long long d,f[500100],g[500100],s[500100];


void input()
{
    //freopen("input.inp","r",stdin);
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
}

void tao()
{
    freopen("input.inp","w",stdout);
    printf("300000\n");
    for (int i=1;i<=300000;i++)
        printf("1000000000 ");
}

void tong()
{
    for (int i=1;i<=n;i++)
        f[i]=f[i-1]+a[i];

    if (f[n]%3!=0)
        return;

    for (int i=n;i>=1;i--)
        g[i]=g[i+1]+a[i];

    for (int i=n;i>=1;i--)
        if (g[i]==f[n]/3)
            s[i]=s[i+1]+1;
        else
            s[i]=s[i+1];
}

void xuli()
{
    long long S=f[n]/3;
    for (int i=1;i<=n-2;i++)
        if (f[i]==S)
            d=d+s[i+2];
}

int main()
{

    //tao();
    input();
    tong();
    xuli();
    printf("%I64d",d);
    return 0;
}
