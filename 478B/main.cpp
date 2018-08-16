#include <iostream>

using namespace std;
long long k1,k2;
int n,m;
int main()
{
    cin>>m>>n;
    //max
    k1 = (1LL*(m-n+1)*(m-n))/2;
    //min
    k2 = (1LL*(m/n+1)*(m/n)/2)*(m%n) + (1LL*(m/n)*(m/n-1)/2)*(n-m%n);
    cout<<k2<<" "<<k1;
    return 0;
}
