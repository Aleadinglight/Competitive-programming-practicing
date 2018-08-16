#include <iostream>

using namespace std;
int n;
int f[3][200], a[200];
int main()
{
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
        if (a[i]==0){
            f[0][i]=max(f[1][i-1],f[2][i-1]);
        }
        else if (a[i]==1){
            f[1][i]=max(f[0][i-1],f[2][i-1])+1;
            f[0][i]=max(f[0][i-1],max(f[1][i-1],f[2][i-1]));
        }
        else if (a[i]==2){
            f[2][i]=max(f[0][i-1],f[1][i-1])+1;
            f[0][i]=max(f[0][i-1],max(f[1][i-1],f[2][i-1]));
        }
        else {
            f[0][i]=max(f[0][i-1],max(f[1][i-1],f[2][i-1]));
            f[2][i]=max(f[0][i-1],f[1][i-1])+1;
            f[1][i]=max(f[0][i-1],f[2][i-1])+1;
        }
        f[0][i]=max(f[0][i-1],f[0][i]);
        f[1][i]=max(f[1][i-1],f[1][i]);
        f[2][i]=max(f[2][i-1],f[2][i]);
    }
    cout<<(n-max(f[0][n],max(f[1][n],f[2][n])));
    return 0;
}
