#include <stdio.h>

using namespace std;
int n, k, l;
long long a[1000][1000],r[1000],c[1000],d1,d2;

void input()
{
    freopen("", "r", stdin);
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            scanf("%i",&a[i][j]);
            if (a[i][j]==0)
            {
                k=i;
                l=j;
            }
        }
}

void check()
{   long long t=r[1],q=c[1];
    for (int i=2; i<=n;i++)
        if ((r[i]!=t) || (c[i]!=q))
        {
            printf("-1");
            return;
        }
    if ((q!=t) || (q!=d1)) {
        printf("-1");
        return;
    }
    if (d1!=d2)
    {
        printf("-1");
        return;
    }
    printf("%I64d",a[k][l]);
}

void xuli()
{
    long long temp;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            r[i]=r[i]+a[i][j];
            c[j]=c[j]+a[i][j];
            if (i==j)
                d1=d1+a[i][j];
            if (i==n-j+1)
                d2=d2+a[i][j];

        }
    if (k!=n)
        temp=r[k+1];
    else
        temp=r[k-1];
    if (r[k]!=c[l])
    {
        printf("-1");
        return;
    }
    if (k==l)
    {
        if (d1>d2)
            a[k][l]=-1;
        else
            a[k][l]=d2-d1;
    }
    else if(k==n-l+1)
    {
        if (d2>d1)
            a[k][k]=-1;
        else
            a[k][l]=d1-d2;
    }
    else
    {
        a[k][l]=d1-r[k];
    }
    if (a[k][l]==-1)
    {
        printf("-1");
        return;
    }

    if (a[k][l]==0)
        a[k][l]=temp-r[k];

    if (a[k][l]<=0){
        printf("-1");
        return;
    }

    if (k==n-l+1)
        d2=d2+a[k][l];

    if (k==l)
        d1=d1+a[k][l];

    r[k]=r[k]+a[k][l];
    c[l]=c[l]+a[k][l];
    check();
}

int main()
{
    input();
    if (n==1)
        printf("1");
    else
        xuli();
    return 0;
}
