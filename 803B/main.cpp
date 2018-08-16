#include <iostream>

using namespace std;
int a[200010],d[200010],m,n;
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        if (a[i]==0)
        {
            m++;
            d[m]=i;
        }
    }
    for (int i=d[1]-1;i>=1;i--)
        a[i]=a[i+1]+1;
    for (int i=d[m]+1;i<=n;i++)
        a[i]=a[i-1]+1;
    int l,r,dem;
    for (int i=1;i<m;i++)
    {
        l=d[i];
        r=d[i+1];
        dem=0;
        while (l<=r){
            a[l]=dem;
            a[r]=dem;
            l++;
            r--;
            dem++;
        }
    }
    for (int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
