#include <iostream>

using namespace std;
int n,m,a[100],b[100];
int main()
{
    cin>>n>>m;
    for (int i=0; i<n; i++)
        cin>>a[i];

    b[0]=a[0];
    for (int i=1; i<n; i++){
        b[i]=min(b[i-1]*2, a[i]);
    }
    long long ans=4e18, tg=0;

    for (int i=n-1; i>=0; i--){
        int need=m/(1<<i);
        tg = tg+1LL*need*b[i];
        m = m -(need<<i);
        ans = min(ans, tg+ (m>0)*(b[i]));
    }
    cout<<ans;
    return 0;
}
