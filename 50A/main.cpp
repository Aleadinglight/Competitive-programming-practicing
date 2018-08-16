#include <iostream>

using namespace std;
int n,m;
int main()
{
    cin>>n>>m;
    int a = n/2*m + (n%2)*(m/2);
    int b = m/2*n + (m%2)*(n/2);
    if (a>b)
        cout<<a;
    else
        cout<<b;
    return 0;
}
