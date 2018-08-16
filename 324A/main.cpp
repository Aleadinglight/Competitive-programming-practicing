#include <iostream>

using namespace std;
int n,m,t,a[200],d,k;
int main()
{
    cin>>m>>t;
    if (m==1){
        if (t==10)
            cout<<"-1";
        else
            cout<<t;
        return 0;
    }
    n=m-1;
    for (int i=1;i<=n;i++)
        a[i]=9;
    for (int i=1;i<=m;i++)
    {
        k=a[i];
        a[i]=(k*t+d)%10;

        d=(k*t+d)/10;
    }
    for (int i=m;i>=1;i--)
        cout<<a[i];
    return 0;
}
