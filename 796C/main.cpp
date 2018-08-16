#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int L[3][300010];

int n,a[300010],maxx=0,imaxx,d[300010],ans;
vector <int> c[300010];

void input(){
    maxx=-1000000000;
    freopen("input.inp","r",stdin);
    scanf("%i",&n);
    for (int i=1;i<=n;i++){
        scanf("%i",&a[i]);
        if (a[i]>maxx){
            maxx=max(a[i],maxx);
            imaxx=i;
        }
    }
    int r,l;
    for (int i=1;i<n;i++)
    {
        scanf("%i %i",&r,&l);
        c[r].push_back(l);
        c[l].push_back(r);
    }
}

void xuli()
{
    int h=0,t;
    L[h][0]=1;
    d[imaxx]=1;
    L[h][1]=imaxx;
    ans=maxx;
    while (L[h][0]>0)
    {
        t=1-h;
        int w=L[h][0];
        L[t][0]=0;

        for (int i=1;i<=w;i++){
            int r=L[h][i];

            for (int j=0;j<(int)c[r].size();j++)
                if (d[c[i][j]]==0){
                    L[t][0]++;
                    L[t][L[t][0]]=c[i][j];
                    ans=max(c[i][j]+1,ans);
                    d[c[i][j]]=1;
                }
        }
        h=t;
    }
}

int main()
{
    input();
    xuli();
    printf("%i",ans);
    return 0;
}
