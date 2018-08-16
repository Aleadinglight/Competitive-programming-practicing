#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int MAX=410000,isNotPrime[410001],isNotSqFree[410001],devisum[410001],PrimeDivi[410001];
long long SumOfGNumb[100002]={0};
int S_MAX=sqrt(MAX);

void danhdau(int k)
{
    int i=k*k;
    while(i<=MAX)
    {
        isNotPrime[i]=1;
        i=i+k;
    }
}

void eli(int k)
{
    int i=k*k;
    int j=1;
    long long l=i*j;
    while (l<=MAX)
    {
        isNotSqFree[l]=1;
        j++;
        l=i*j;
    }
}

void sum(int k)
{
    int i=k,j=1;
    while (1LL*i*j<=MAX)
    {
        devisum[i*j]+=k;
        j++;
    }
}

void eratosthenes()
{
    isNotPrime[0]=1;
    isNotPrime[1]=1;
    for (int i=2;i<=S_MAX;i++){
        if (isNotPrime[i]==0)
            danhdau(i);
        eli(i);
    }
}

void SumNow()
{
    for (int i=1;i<=100000;i++)
        sum(i);
}

void CntPD(int k)
{
    int i=k,j=1;
    while (1LL*i*j<=MAX)
    {
        PrimeDivi[i*j]++;
        j++;
    }
}

void CntPrimeDivi()
{
    for (int i=2;i<=MAX;i++)
        if (isNotPrime[i]==0)
            CntPD(i);
}

void tinhSum()
{
    for (int i=1;i<=100000;i++)
        if (isNotSqFree[i]==0 && isNotPrime[PrimeDivi[devisum[i]]]==0)
            SumOfGNumb[i]=devisum[i]+SumOfGNumb[i-1];
        else
            SumOfGNumb[i]=SumOfGNumb[i-1];
}

int main()
{
    int n,m,T;
    long long tg;
    SumNow();
    eratosthenes();
    CntPrimeDivi();
    tinhSum();
    //freopen("input.inp","r",stdin);
    scanf("%i",&T);
    for (int i=1;i<=T;i++)
    {
        scanf("%i %i",&n,&m);
        tg=SumOfGNumb[m]-SumOfGNumb[n-1];
        printf("%lld\n",tg);
    }
    return 0;
}
