#include <iostream>

using namespace std;
long long n,k,ans,m;
int main()
{
    cin>>n>>k;
    if (n%2==0)
        m=n/2;
    else
        m=n/2+1;
    if (k<=m)
        ans = 2*k-1;
    else
        ans = (k-m)*2;
    cout<<ans;
    return 0;
}
