#include <iostream>
#include <stdio.h>
using namespace std;
int c[4000], a[4000], c_min[4000], L[4000], t[4000], n;

void debug(){
    for (int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i=1;i<=n;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for (int i=1;i<=n;i++){
        cout<<L[i]<<" ";
    }
    cout<<endl;
    for (int i=1;i<=n;i++){
        cout<<t[i]<<" ";
    }
    cout<<endl;
    for (int i=1;i<=n;i++){
        cout<<c_min[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    //freopen("input.inp","r",stdin);
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int i=1;i<=n;i++){
        cin>>c[i];
    }
    int ans=4e8;
    for (int i=1; i<=n;i++){
        c_min[i]=1e8+1;
        L[i]=1;
        for (int j=i-1;j>0;j--){
            if (a[i]>a[j] && c[j]<c_min[i]){
                L[i]=L[j]+1;
                c_min[i]=c[j];
                t[i]=j;
            }
            if (L[j]>=2 && a[i]>a[j]){
                int tg = c[i] + c_min[j]+ c[j];
                if (tg<ans)
                    ans=tg;
            }
        }
    }
    //debug();
    if (ans==4e8)
        ans=-1;
    cout<<ans;
    return 0;
}
