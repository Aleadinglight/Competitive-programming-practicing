#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
int a[300],b[300];
int main()
{
    int n,k,ans=0;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>k;
        a[k]++;
    }
    for (int i=1;i<=n;i++){
        cin>>k;
        b[k]++;
    }
    for (int i=1;i<=5;i++)
        if ((a[i]+b[i])%2==0)
            ans+=abs((a[i]+b[i])/2-a[i]);
        else{
            cout<<"-1";
            return 0;
        }
    cout<<ans/2;
    return 0;
}
