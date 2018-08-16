#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int n,m,k,a[1000];
int main()
{
    int ans=2000;
    cin>>n>>m>>k;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
        if (a[i]!=0 && a[i]<=k){
            ans=min(ans, abs(i-m)*10);
        }
    cout<<ans;
    return 0;
}
