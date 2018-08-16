#include <iostream>
#include <stdio.h>
using namespace std;
int t,n,d,a[3][100100],ans,dem[3];
char c[3][100100];
void input()
{
    freopen("input.inp","r",stdin);
    scanf("%i\n",&t);
    for (int k=1;k<=t;k++)
    {
        scanf("%i\n",&n);
        for (int i=0;i<2;i++)
            scanf("%s\n",c[i]);
        d=-1;
        dem[0]=0;
        dem[1]=0;
        ans=0;
        for (int i=0;i<n;i++){
            if (d==-1)
            {
                if (c[0][i]=='*' && c[1][i]=='*')
                    ans++;
                else if (c[0][i]=='*' && c[1][i]!='*')
                    d=0;
                else if (c[1][i]=='*' && c[0][i]!='*')
                    d=1;
            }
            else{
                if (c[0][i]=='*' && c[1][i]=='*'){
                    ans+=2;
                    d=-1;
                }
                else if ((c[0][i]=='*' && d==1) || (c[1][i]=='*' && d==0)){
                    ans++;
                    d=-1;
                }
                else if ((c[0][i]=='*' && d==0) || (c[1][i]=='*' && d==1))
                    ans++;

            }
            if (dem[0]==0 && c[0][i]=='*')
                dem[0]++;

            if (dem[1]==0 && c[1][i]=='*')
                dem[1]++;
        }
        if (d!=-1)
            ans++;
        if (dem[0]>0 && dem[1]>0)
            ans++;
        printf("%i\n",ans-1);
    }
}

int main()
{
    input();
    return 0;
}
