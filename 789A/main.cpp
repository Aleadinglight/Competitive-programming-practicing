#include <iostream>

using namespace std;

int main()
{
    int a,n,k;
    long long tg=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        tg+=a/k;
        if (a%k!=0)
            tg++;
    }
    if (tg%2==0)
        tg=tg/2;
    else
        tg=tg/2+1;
    cout<<tg;
    return 0;
}
