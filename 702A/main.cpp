#include <iostream>

using namespace std;
int n,f[100100],maxx=0,a[100100];
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
        if (a[i]>a[i-1])
            f[i]=f[i-1]+1;
        else
            f[i]=1;
    for (int i=1;i<=n;i++)
        maxx=max(maxx,f[i]);
    cout<<maxx;
    return 0;
}
