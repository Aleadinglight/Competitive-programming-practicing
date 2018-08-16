#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int gt[4]={2,3,5,7}, nt[16],q,p;
long long r,l,ans;

long long mulmod(long long a, long long b, long long mod)
{
    long long x = 0,y = a % mod;
    while (b > 0)
    {
        if (b%2==1)
        {
            x = (x+ y)%mod;
        }
        y = (y*2)%mod;
        b=b/2;
    }
    return x % mod;
}

int modulo(int a,int b,int c){
    long long x=1,y=a;
    while(b > 0){
        if(b%2==1){
            x=mulmod(x,y,c);
        }
        y = mulmod(y,y,c);
        b= b/2;
    }
    return x%c;
}

bool Miller(long long p,long long iteration)
{
    if (p < 2)
    {
        return false;
    }
    if (p != 2 && p % 2==0)
    {
        return false;
    }
    long long s = p - 1;
    int k=0;
    while ((s&1)==0)
    {
        k++;
        s=s>>1;
    }
    for (long long i = 0; i < iteration; i++)
    {
        long long a = rand() % (p - 1) + 1, temp = s;

        long long mod = modulo(a, temp, p);

        while (temp != p - 1 && mod != 1 && mod != p - 1)
        {
            mod = mulmod(mod, mod, p);
            temp *= 2;
        }
        if (mod != p - 1 && temp % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

void check(int n)
{
    long long m=0;
    for (int i=n;i>=1;i--)
    {
        m=m*10+nt[i];
    }
    if (m>=l && m<=r){
        if (Miller(m, 20)){
            ans++;
        }
    }
    else
        return;
}

void taosoNt(int n)
{
    if (n>q)
        return;
    if (n==1){
        for (int i=1;i<=3;i+=2)
        {
            nt[n]=gt[i];
            if (n>=p)
                check(n);
            taosoNt(n+1);
        }
    }
    else {
        for (int i=0;i<=3;i++)
        {
            nt[n]=gt[i];
            if (n>=p)
                check(n);
            taosoNt(n+1);
        }
    }
}

int dem(long long k)
{
    int d=0;
    while(k>0){
        d++;
        k/=10;
    }
    return d;
}

int main()
{
    cin>>l>>r;
    if (r<10)
    {
        for (int i=0;i<4;i++)
            if (gt[i]>=l && gt[i]<=r)
                ans++;
        cout<<ans;
        return 0;
    }
    if (l<10)
    {
        for (int i=0;i<4;i++)
            if (gt[i]>=l && gt[i]<=r)
                ans++;
        l=10;
    }
    p=dem(l);
    q=dem(r);
    taosoNt(1);
    cout<<ans;
    return 0;
}
