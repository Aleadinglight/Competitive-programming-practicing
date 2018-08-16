#include <iostream>
#include <algorithm>
using namespace std;

int n,x,a[4]={0,1,2};

int main()
{
    cin>>n>>x;
    n=n%6;
    for (int i=1;i<=n;i++)
        if (i%2==0)
            swap(a[1],a[2]);
        else
            swap(a[0],a[1]);
    cout<<a[x];
    return 0;
}
