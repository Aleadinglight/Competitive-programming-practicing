#include <stdio.h>
#include <algorithm>
using namespace std;
int n,a[300000];

void input()
{
    freopen("","r",stdin);
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
}


int xuli()
{
    sort(a,a+n+1);
    int k=a[1], d=1;
    for (int i=2; i<=n; i++)
        if (a[i]!=a[i-1])
            d++;
    if (d==2 || d==1)
        return 1;
    if ( (d==3) && ((a[1]+a[n])%2==0) )
        for (int i=1;i<=n;i++)
            if (a[i]==(a[1]+a[n])/2)
                return 1;
    return 0;
}

int main()
{
    input();
    if (xuli())
        printf("YES");
    else
        printf("NO");
    return 0;
}
