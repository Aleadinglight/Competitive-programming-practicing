#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n,a[100100];

int tim(int k)
{
    int l=1;
    int r=n,mid;
    while (l<=n)
    {
        mid = (l+r)/2;
        if (a[mid]<=k)
            if (mid<n && a[mid+1]<=k)
                l=mid+1;
            else
                return mid;
        else
            r=mid-1;
    }
    return 0;
}

void input()
{
    int k;
    int q;
    //freopen("input.inp","r",stdin);
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
    sort(a+1,a+1+n);
    scanf("%i",&q);
    for (int i=1;i<=q;i++){
        scanf("%i",&k);
        printf("%i\n",tim(k));
    }
}

int main()
{
    input();
    return 0;
}
