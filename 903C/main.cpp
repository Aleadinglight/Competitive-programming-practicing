#include <iostream>
#include <algorithm>
using namespace std;
int a[10000],n,d;
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=2;i<=n; i++)
        for (int j=1;j<i;j++){
            if (a[j]!=0 && a[i]>a[j]){
                a[j]=0;
                break;
            }
        }
    for (int i=1;i<=n;i++){
        if (a[i]>0)
            d++;
    }
    cout<<d;
    return 0;
}
