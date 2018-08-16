#include <iostream>
#include <algorithm>
using namespace std;
int a[100010];
int main()
{
    int n,k,minn=1e9+10;
    cin>>n>>k;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        minn=min(a[i],minn);
    }
    int m=a[1]%k;
    long long d=0;
    for (int i=1;i<=n;i++)
        if (a[i]%k!=m)
        {
            cout<<"-1";
            return 0;
        }
    for (int i=1;i<=n;i++)
        d=d+(a[i]-minn)/k;
    cout<<d;
    return 0;
}
