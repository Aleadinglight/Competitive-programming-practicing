#include <stdio.h>
#include <algorithm>
using namespace std;

int a[100100],n,k;

void input()
{
    scanf("%i %i",&n,&k);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
}

void xuli()
{   int maxx=-1;
    if (n<=k)
        maxx = a[n];
    else
    for (int i=1;i<=k;i++)
        if (n-k-i+1>0)
            maxx=max(a[n-k-i+1]+a[n-k+i],maxx);
        else
            maxx=max(maxx,a[n-k+i]);
    printf("%i",maxx);
}

int main()
{
    input();
    xuli();
    return 0;
}

