#include <iostream>

using namespace std;
int minn,n,k,ans,a[150100],f[150100];
int main()
{
    cin>>n>>k;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
        f[i]=f[i-1]+a[i];
    minn=f[n];
    ans=1;
    for (int i=k;i<=n;i++)
        if (f[i]-f[i-k]<minn){
            minn=f[i]-f[i-k];
            ans = i-k+1;
        }
    cout<<ans;
    return 0;
}
