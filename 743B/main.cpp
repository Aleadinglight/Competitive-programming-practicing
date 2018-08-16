#include <stdio.h>

using namespace std;

int n;
long long k;

int tim()
{
    long long m=1;
    int i=1;
    while (m*2<=k)
    {
        m=m*2;
        i++;
    }
    while (k>1)
    {
        k=k-m;
        if (k==0)
            return i;
        while (m>k){
            m/=2;
            i-=1;
        }
    }
    return 1;
}

void xuli()
{
    //freopen("input.inp","r",stdin);
    scanf("%i %I64d",&n,&k);
    printf("%i",tim());
}

int main()
{
    xuli();
    //tao();
    return 0;
}
