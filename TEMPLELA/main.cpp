#include <iostream>

using namespace std;

int main()
{
    int T,n, a[200];
    cin>>T;
    while(T--){
        cin>>n;
        for (int i=1;i<=n;i++)
            cin>>a[i];
        if (n%2==0)
            cout<<"no"<<endl;
        else{
            int l=n/2+1;
            int r=n/2+1;
            while (l>0){
                if (a[l]!=a[r] || a[l]!=l){
                    cout<<"no"<<endl;
                    break;
                }
                l--;
                r++;
            }
            if (l==0)
                cout<<"yes"<<endl;
        }
    }
    return 0;
}
