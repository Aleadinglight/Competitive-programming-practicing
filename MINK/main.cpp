#include <iostream>

using namespace std;
int T,n,k, a[20000], D[20000], r, l;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for (int t=1; t<=T; t++){
        cin>>n>>k;
        for (int i=1; i<=n; i++)
            cin>>a[i];
        l=1;
        r=l;
        for (int i=1; i<=n; i++){
            if (D[l]<i-k+1)
                l++;
            while (r>=l && a[i]<a[D[r]])
                r--;
            r++;
            D[r]=i;
            if (i>=k)
                cout<<a[D[l]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
