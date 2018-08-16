#include <iostream>
#include <algorithm>
using namespace std;
int n,k,a[300],b[300];
int main()
{
    cin>>n>>k;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=k;i++)
        cin>>b[i];
    sort(b+1,b+k+1);
    int kt=0;
    for (int i=1;i<n;i++){
        if (a[i]!=0 && a[i+1]!=0 ){
            if (a[i]>a[i+1]){
                kt=1;
                break;
            }
        }
        else if (a[i]==0 && a[i+1]==0){
            kt=1;
        }
        else if (a[i]==0){
            if (a[i+1]==0){
                kt=1;
                break;
            }
            else
            {
                for (int j=k;j>=1;j--)
                    if (b[j]>a[i+1])
                        kt=1;

            }
        }
        else{
            for (int j=1;j<=k;j++)
                if (b[j]<a[i])
                    kt=1;
        }
    }
    if (kt==1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
