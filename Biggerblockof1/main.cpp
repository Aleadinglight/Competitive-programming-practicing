#include <stdio.h>

using namespace std;

int a[1000][1000],C[1000][1000],R[1000][1000],maxx,n,m,k,l;

void input()
{
    freopen("input.inp","r",stdin);
    scanf("%i",&n);
    scanf("%i",&m);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            scanf("%i",&a[i][j]);
}

void QHD()
{
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (a[i][j]==1)
                R[i][j] = R[i][j-1]+1;
            printf("%i ",R[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int j=1;j<=m;j++)
        for (int i=1;i<=n;i++)
            if (a[i][j]==1)
                C[i][j] = C[i-1][j]+1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++)
            printf("%i ",C[i][j]);
        printf("\n");
    }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++){
            if (R[i][j]>0 && C[i][j]>0 && F[i-1][j-1]>0){
                F[i][j] = min(R[i][j],min(C[i][j],F[i-1][j-1]))+1
            if (F[i][j]>maxx)
            {
                maxx = F[i][j];
                k=
            }
        }
}

void output()
{
    printf("Max: %i\n\n",maxx);
    printf("Ma tran: %ix%i\n\n",k,l);
}

int main()
{
    input();
    QHD();
    output();
    return 0;
}
