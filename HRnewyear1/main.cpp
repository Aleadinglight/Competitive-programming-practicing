#include <iostream>
#include <algorithm>

using namespace std;
int minn,n,d,a[1000];
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    minn=a[1];
    for (int i=2;i<=n;i++){
        minn=min(minn,a[i]);
    }
    for (int i=1;i<=n;i++)
        if (a[i]==minn)
            d++;
    for (int i=1;i<=n;i++)
        if (a[i]==minn){
            a[i]=a[i]*2;
            break;
        }
    minn=a[1];
    for (int i=2;i<=n;i++)
        minn=min(minn,a[i]);
    if (d>1)
        d=n;
    cout<<minn<<" "<<d;
    return 0;
}
