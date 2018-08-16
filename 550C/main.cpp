#include <iostream>
#include <string.h>
using namespace std;
char a[200];
int f[200][8],t[200][8];
int main()
{
    cin>>a;
    int n=strlen(a);

    for (int i=0;i<n;i++)
        for (int j=0;j<8;j++)
        {
            if (f[i-1][j]==0)
            {
                int k=(8-(a[i]-'0')%8+j)%8;
                if (k==0){
                    f[i][j]=1;
                    t[i][j]=-10;
                }
                if (k%2==0)
                    for( int x=0;x<8;x++)
                        if ((x*10)%8==k && f[i-1][x]==1)
                        {
                            t[i][j]=x;
                            f[i][j]=f[i-1][x];
                        }
            }
            else
            {
                t[i][j]=-j;
                if (j==0)
                    t[i][j]=-8;
                f[i][j]=1;
            }
        }

    if (f[n-1][0]==0){
        cout<<"NO";
    }
    else
    {
        int j=0;
        for (int i=n-1;i>=0;i--){
            if (t[i][j]<0)
            {
                if (t[i][j]!=-10)
                    a[i]='_';
                else{
                    for (int x=i-1;x>=0;x--)
                        a[x]='_';
                    break;
                }
                j=(-t[i][j])%8;
            }
            else
                j=t[i][j];
        }
    cout<<"YES\n";
    for (int i=0;i<n;i++)
        if (a[i]!='_')
            cout<<a[i];
    }
    return 0;
}
