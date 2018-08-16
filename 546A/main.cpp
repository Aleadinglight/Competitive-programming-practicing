#include <iostream>

using namespace std;
int k,n,w;

int main()
{
    cin>>k>>n>>w;
    int ans = k*(w*(w+1)/2)-n;
    if (ans<0)
        ans = 0;
    cout<<ans;
    return 0;
}
