#include <iostream>

using namespace std;
int a[2000],b[2000],c[2000],f[200],d[200];
int main()
{
    int m=0,n;
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++){
        cin>>b[i];
        if (b[i]==a[i])
            c[b[i]]=1;
        else{
            m++;
            f[m]=i;
        }
    }
    if (m==1){
        for (int i=1;i<=n;i++)
            if (c[i]==0)
            {
                a[f[1]]=i;
                break;
            }
        for (int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        return 0;
    }
    m=0;
    for (int i=1;i<=n;i++)
        if (c[i]==0)
        {
            m++;
            d[m]=i;
        }
    if (!( (d[1]==a[f[1]] && d[2]==b[f[2]]) || (d[1]==b[f[1]] && d[2]==a[f[2]]) ) ){
        d[0]=d[1];
        d[1]=d[2];
        d[2]=d[0];
    }
    for (int i=1;i<=n;i++)
        if (a[i]==b[i])
            cout<<a[i]<<" ";
        else{
            cout<<d[1]<<" ";
            d[1]=d[2];
        }
    return 0;
}
