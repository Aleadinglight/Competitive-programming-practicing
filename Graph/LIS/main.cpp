#include <stdio.h>
#include <algorithm>
using namespace std;

int a[30001],L[30001],endOf[30001],n;

int tim(int i, int m)
{
    int l=0, mid,r=m;
    while (l<=r)
    {
        mid=(l+r)/2;
        if (a[endOf[mid]]<a[i])
        {
            if (mid<m && a[endOf[mid+1]]<a[i])
                l=mid+1;
            else
                return mid;
        }
        else
            r=mid-1;
    }
    return 0;
}

int main()
{
    scanf("%i",&n);
    int maxx=-1;
    for (int i=1;i<=n;i++)
    {
        scanf("%i",&a[i]);
        maxx=max(a[i],maxx);
    }
    int m=0;
    a[n+1]=maxx+1;
    for (int i=1;i<=n+1;i++)
    {
        L[i]=tim(i,m)+1;
        if (L[i]>m)
        {
            m=L[i];
            endOf[m]=i;
        }
        else
            if (a[endOf[L[i]]]>a[i])
                endOf[L[i]]=i;
    }
    printf("%i",L[n+1]-1);
    return 0;
}
