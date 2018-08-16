#include <iostream>

using namespace std;
int a[100010],d[100010],n;
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    int maxx=n;
    for (int i=1;i<=n;i++){
        d[a[i]]=1;
        if (maxx==a[i]){
            for (int j=a[i];j>=1;j--)
                if (d[j]==0)
                    break;
                else{
                    cout<<j<<" ";
                    maxx--;
                }
        }
        cout<<"\n";
    }
    return 0;
}
