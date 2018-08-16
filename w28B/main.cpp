#include <iostream>
#include <stdio.h>
using namespace std;

long long x,d;

void dem(long long x)
{
    long long tc=1;
    while (x>0)
    {
        if (x%2==0)
            d += tc;
        tc=tc*2;
        x = x/2;
    }
}

int main()
{
    int q;
    scanf("%i",&q);
    while (q--)
    {
        scanf("%lld",&x);
        d=0;
        dem(x);
        printf("%lld\n",d);
    }
    return 0;
}
