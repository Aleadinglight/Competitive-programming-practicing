#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int n,m,fr[100],fl[100],r[100],l[100],a[100][110];
char st[200];
int main()
{
    int maxx=1;
    freopen("","r",stdin);
    scanf("%i %i\n",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%s\n",st);
        for (int j=0;j<m+2;j++)
            if (st[j]=='1')
                a[i][j]=1;
        }

    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            if (a[i][j]==1){
                if (maxx==1)
                    maxx=n-i+1;
                if (l[n-i+1]==0)
                    l[n-i+1]=m+1-j;
                r[n-i+1]=j;
            }
    if (maxx==1)
    {
        printf("%i",r[1]);
        return 0;
    }
    fr[1]=m+1;
    fl[1]=2*r[1];

    for (int i=2;i<maxx;i++)
    {
        fr[i]=min(fr[i-1]+l[i]*2, fl[i-1]+m+1)+1;
        fl[i]=min(fl[i-1]+r[i]*2, fr[i-1]+m+1)+1;
    }

    printf("%i",min(fr[maxx-1]+l[maxx]+1,fl[maxx-1]+r[maxx]+1));
    return 0;
}
