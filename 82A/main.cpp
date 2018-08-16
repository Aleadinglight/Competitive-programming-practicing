#include <iostream>

using namespace std;
int tg,tc,ans,n;

void timtc()
{
    tc=1;
    tg=0;
    while (1LL*(tg+tc*5)<=n)
    {
        tg=tg+tc*5;
        tc*=2;
    }
}

void xuli()
{
    int k=n-tg;
    if (k==0)
        ans=5;
    else
        ans = (k-1)/tc+1;
}

void inra()
{
    if (ans==1)
        cout<<"Sheldon";
    if (ans==2)
        cout<<"Leonard";
    if (ans==3)
        cout<<"Penny";
    if (ans==4)
        cout<<"Rajesh";
    if (ans==5)
        cout<<"Howard";
}

int main()
{
    cin>>n;
    timtc();
    xuli();
    inra();
    return 0;
}
