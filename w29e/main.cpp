#include <stdio.h>
#include <math.h>
using namespace std;

double abss(double i)
{
    if (i>=0)
        return i;
    else
        return -1.*i;
}

int main()
{
    long long a,b,k,l,q,w;
    scanf("%lld %lld",&a,&b);
    double minn=4.0;
    for (long long i=a;i<=b;i++)
    {
        k=floor(i*M_PI);
        l=ceil(i*M_PI);

        if (abss(1.*k/i-M_PI)<minn){
            minn=abss(1.*k/i-M_PI);
            q=k;
            w=i;
        }
        if (abss(1.*l/i-M_PI)<minn){
            minn=abss(1.*l/i-M_PI);
            q=l;
            w=i;
        }
    }
    printf("%lld/%lld",q,w);
    return 0;
}
