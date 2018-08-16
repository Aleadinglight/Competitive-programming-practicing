#include <iostream>

using namespace std;
int a[1000];
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
        a[i]=n-i+1;
    int tg=(n+1)*n/2;
    int l=1, r=n-1, ans=1;
    tg-=1;
    while (tg>0){
        if (l>=r){
            ans+=a[r]/ (n/r);
            tg-=a[r];
            a[r]=0;
            r--;
            l=1;
        }
        if (r==1){
            if (a[r]%n==0 && a[r]>0)
                ans+=a[r]/n;
            if (a[r]%n!=0)
                ans+=a[r]/n+1;
            tg-=a[r];
            a[r]=0;
        }
        ans+=a[r];
        tg = tg-a[r]-(n - r)/l*a[r];
        a[l]=a[l]-(n - r)/l*a[r];
        a[r]=0;
        l++;
        r--;

    }
    cout<<ans;
    return 0;
}
