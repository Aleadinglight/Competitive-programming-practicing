#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

struct bang{
    int x,y;
};
int t, a[503][503],d,n,m,r,l,maxx;
bang L[250010];

void them(int q, int p){
    int doc[9] = {-1,0 , 1, 1, 1, 0,-1,-1};
    int ngang[9]={-1,-1,-1, 0, 1, 1, 1, 0};
    for (int i=0;i<8;i++)
        if ((1<=q+doc[i]) && (q+doc[i]<=n) && (1<=p+ngang[i]) && (p+ngang[i]<=m)  && a[q+doc[i]][p+ngang[i]]!=-1){
            d++;
            L[r+d].x=q+doc[i];
            L[r+d].y=p+ngang[i];
            a[q+doc[i]][p+ngang[i]]=-1;
        }
}

void loang(){
    int dem=-1;
    while (l<=r)
    {
        dem++;
        d=0;
        for (int i=l;i<=r;i++)
            them(L[i].x,L[i].y);
        l=r+1;
        r+=d;
    }
    printf("%i\n",dem);
}

int main()
{
    freopen("input.inp","r",stdin);
    scanf("%i",&t);

    for (int k=1;k<=t;k++)
    {
        scanf("%i %i",&n,&m);
        maxx=0;

        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++){
                scanf("%i",&a[i][j]);
                maxx=max(a[i][j],maxx);
            }
        }
        l=0;
        r=-1;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++)
                if (a[i][j]==maxx)
                {
                    r++;
                    L[r].x=i;
                    L[r].y=j;
                    a[i][j]=-1;
                }
        loang();
    }
    return 0;
}
