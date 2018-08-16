#include <stdio.h>
#include <algorithm>
using namespace std;
int a[10010];
int kt=0,kt2=0;
int main()
{
    int n,m,k,l;
    scanf("%i %i",&n,&m);
    for (int i=1;i<=m;i++)
    {
        int tg=0;
        kt=0;
        scanf("%i",&k);
        for (int j=1;j<=k;j++)
            scanf("%i",&a[j]);
        sort(a,a+1+k);
        for (int j=1;j<k;j++)
            if (a[j]==a[j+1])
                kt=1;
        if (kt==0)
            kt2=1;
    }
    if (kt2==0)
        printf("NO");
    else
        printf("YES");
    return 0;
}
