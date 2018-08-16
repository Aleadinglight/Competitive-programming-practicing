#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int a[3000],b[4000],n,k,l,tg;
int main()
{
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%i %i",&k,&l);
        a[k+l]++;
        b[k-l+1000]++;
    }
    for (int i=1;i<=2001;i++)
        tg=tg+ (a[i]*(a[i]-1))/2;
    for (int i=1;i<=3999;i++)
        tg=tg+ (b[i]*(b[i]-1))/2;
    printf("%i",tg);
    return 0;
}
