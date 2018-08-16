#include <stdio.h>

using namespace std;

int n,m,T,a[7000][7000],L[2][7000],t[7000],f[6000],trace[6000];

void them(int q, int w)
{
    for (int i=1;i<=n;i++)
        if ((a[w][i]!=0) && (f[i]<f[w]+1) && (t[w]<=T-a[w][i] ))
        {
            L[q][0]++;
            L[q][L[q][0]] = i;
            t[i] = t[w] + a[w][i];
            f[i]=f[w]+1;
            trace[i]=w;
            a[w][i]=0;
        }
}

void loang()
{
    int l=0,k;
    f[1]=1;
    trace[1]=-1;
    L[l][0]=1;
    L[l][1]=1;
    while (L[l][0]>0)
    {
        k=1-l;
        L[k][0]=0;
        for (int i=1;i<=L[l][0];i++)
            them(k,L[l][i]);
        l=1-l;
    }
}

int main()
{
    int k,l,q;
    freopen("input.inp","r", stdin);
    scanf("%i %i %i",&n,&m,&T);
    for (int i=1;i<=m;i++){
        scanf("%i %i %i",&l,&k,&q);
        a[l][k]=q;
    }
    loang();
    printf("%i\n",f[n]);
    int p[7000];
    l=1;
    p[1]=n;
    k=trace[n];
    while(k>0)
    {
        l++;
        p[l]=k;
        k=trace[k];
    }
    for (int i=f[n];i>=1;i--)
        printf("%i ",p[i]);
    return 0;
}
