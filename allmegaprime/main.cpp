#include <stdio.h>
#include <math.h>
using namespace std;

int d;

bool checkprime(long long n)
{
    int m=sqrt(n),kt=1;
    for (int i=2;i<=m;i++)
        if (n%i==0)
            kt=0;
    if (kt==1)
    {
        long long w=n;
        while (w>0)
        {
            if (w%10 != 2 && w%10!= 3 && w%10!= 5 && w%10!= 7)
            {
                kt=0;
                break;
            }
            w/=10;
        }
        if (kt==1){
            return true;
        }
    }
    return false;
}

int main()
{
    long long i=2,maxx=1e15;
    freopen("output.out","w",stdout);
    while (i<=maxx)
    {
        if(checkprime(i)){
            d++;
            printf("%i %lld\n",d,i);
        }
        i++;
    }
    return 0;
}
