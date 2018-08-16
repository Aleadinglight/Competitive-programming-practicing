#include <iostream>
#include <stdio.h>
using namespace std;
int a[50000], L[50000], D[50000], R[50000],T,n;

void tao(){
    freopen("input.inp", "w", stdout);
    cout<<1<<endl;
    cout<<30000<<endl;
    for (int i=1;i<=30000; i++)
        cout<<30000<<" ";
}

int main()
{
    //tao();
    //if (1) return 0;
    //freopen("input.inp","r",stdin);
    scanf("%i",&T);
    for (int t=1; t<=T; t++){
        scanf("%i",&n);
        for (int i=1; i<=n; i++)
            scanf("%i",&a[i]);
        int top=0;
        D[0]=0;
        for (int i=1;i<=n;i++){
            while(top>0 && a[D[top]]>=a[i])
                top--;
            top++;
            D[top]=i;
            L[i]=D[top-1]+1;
        }
        D[0]=n+1;
        top=0;
        for (int i=n;i>=1;i--){
            while(top>0 && a[D[top]]>=a[i])
                top--;
            top++;
            D[top]=i;
            R[i]=D[top-1]-1;
        }
        long long maxx=0;

        int x=0,y=0;
        for (int i=1;i<=n;i++){
            if (1LL*(R[i]-L[i]+1)*a[i]>maxx){
                maxx=1LL*(R[i]-L[i]+1)*a[i];
                x=L[i];
                y=R[i];
            }
        }
        printf("%lld %i %i\n",maxx, x, y);
    }
    return 0;
}
