#include <iostream>

using namespace std;
int ans,n;
int main()
{
    cin>>n;
    ans = n/5;
    if (n%5!=0)
        ans++;
    cout<<ans;
    return 0;
}
