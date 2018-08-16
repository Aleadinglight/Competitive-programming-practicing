#include <stdio.h>

using namespace std;
int a[200],n,c1,d0=0;
long long d=1;
int main()
{
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
    for (int i=1;i<=n;i++)
        c1=c1+a[i];
    if (c1==1)
    {
        printf("1");
        return 0;
    }
    if (c1==0)
    {
        printf("0");
        return 0;
    }
    c1=0;
    for (int i=1;i<=n;i++)
        if (a[i]==1)
        {
            c1++;
            if (c1>1)
                d=d*(d0+1);
            d0=0;
        }
        else
            d0++;
    printf("%I64d",d);
    return 0;
}
