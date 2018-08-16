#include <stdio.h>

using namespace std;

int n;
long long k;

int in(long long k)
{
    if (k%4==0 || k %7==0)
        return 1;
    while (k>0)
    {
        if (k%4==0)
            return 1;
        k=k-7;
    }
    return -1;
}

int main()
{
    scanf("%i",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&k);
        if (in(k)==1)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
