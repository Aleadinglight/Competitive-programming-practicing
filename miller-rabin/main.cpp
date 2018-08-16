#include <iostream>
#include <cstring>
#include <cstdlib>
#define ll long long
using namespace std;

long long mulmod(long long a, long long b, long long mod)
{
    long long x = 0,y = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
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
        if(b%2 == 1){
            x=mulmod(x,y,c);
        }
        y = mulmod(y,y,c);
        b /= 2;
    }
    return x%c;
}

bool Miller(ll p,ll iteration)
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

int main()
{
    ll iteration = 1000;
    ll num,num1;
    int d=0;
    cout<<"Enter integer to test primality: ";
    cin>>num>>num1;
    for (ll i=num;i<=num1;i++)
        if (Miller(i, iteration))
            d++;
    cout<<d;
    return 0;
}
