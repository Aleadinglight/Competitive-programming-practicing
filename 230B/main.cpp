#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int isNotPrime[1000100];

void check(int k)
{
    int i=2;
    int maxx=1000000;
    while (i*k<=maxx)
    {
        isNotPrime[i*k]=1;
        i++;
    }
}

void init()
{
    int maxx=1000;
    for (int i=2;i<=maxx;i++)
        if (isNotPrime[i]==0)
            check(i);
}

bool isPerfect(long long k)
{
    int root = (int) round(sqrt(k));
    if ((1LL*root*root) == k)
        return true;
    else
        return false;
}

void xuli()
{
    int n;
    long long k;
    isNotPrime[1]=1;
    scanf("%i",&n);
    for (int i=1;i<=n;i++){
        scanf("%I64d",&k);
        if (isPerfect(k)){
            int l=sqrt(k);
            if (isNotPrime[l]==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
}

int main()
{
    init();
    xuli();
    return 0;
}
