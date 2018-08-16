#include <stdio.h>
#include <stdlib.h>

int min2(int p, int q)
{
    if (p>q)
        return q;
    else
        return p;
}

int main()
{
    FILE *f;
    int sum=0,n,d[100][100],k,i,j,u,v;
    f=fopen("input.inp","r");
    fscanf(f,"%i",&n);
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++){
            scanf(f,"%i",&k);
            d[i][j]=k;
            sum+=k;
        }
    for (i=1;i<=n;i++)
        if (d[i][j]==0)
            d[i][j]=sum+1;

    for (i=1;i<=n;i++)
        for (u=1;u<=n;u++)
            for (v=1;v<=n;v++)
                d[u][v]=min2(d[u][i],d[u][i]+d[i][v]);
    fclose(f);

    printf("Input 2 vertex: u -> v:\n");
    scanf("%i %i",&u,&v);
    if (u==v)
        printf("0");
    else
        printf("%i",d[u][v]);
    return 0;
}
