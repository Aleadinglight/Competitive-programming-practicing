#include <iostream>
#include <stdio.h>
using namespace std;
int a[100010], max1, max2;

int main()
{
    //freopen("input.inp","r",stdin);
    int n,k;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>k;
        if (k>max1){
            max2=max1;
            max1=k;
            a[k]--;
        }
        else{
            if (k>max2){
                a[max1]++;
                max2=k;
            }
        }
    }
    int ans=1;
    for (int i=1;i<=n;i++){
        if (a[i]>a[ans]){
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
