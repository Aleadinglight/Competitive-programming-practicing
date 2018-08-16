#include <iostream>

using namespace std;
int a[6000][6000];
int main()
{
    //freopen("input.inp","r",stdin);
    int mod=1e9+7;
    int n;
    char c;
    cin>>n;
    cin>>c;
    a[1][1]=1;
    for (int i=2; i<=n; i++){
        if (c=='f'){
            for (int j=1; j<=i; j++){
                a[i][j+1]=a[i-1][j];
            }
        }
        else{
            int sum=0;
            for (int j=i; j>=1; j--){
                sum=(sum+a[i-1][j])%mod;
                a[i][j]=sum;
            }
        }
        cin>>c;
    }
    int sum = 0;
    for (int i=1;i<=n; i++)
        sum= (sum+a[n][i])%mod;
    cout<<sum;
    return 0;
}
