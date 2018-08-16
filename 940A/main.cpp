#include <iostream>

using namespace std;
int n,d, a[1000];
int main()
{
    cin>>n>>d;
    for (int i=1; i<=n; i++){
        int k;
        cin>>k;
        a[k]++;
    }
    int maxx=0;
    for (int i=1 ;i<=100; i++){
        int rmv=0;
        for (int j=i; j<=i+d; j++)
            rmv = rmv+a[j];
        maxx = max(rmv, maxx);
    }
    cout<<n-maxx;
    return 0;
}
