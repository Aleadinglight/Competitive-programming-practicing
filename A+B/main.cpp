#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int a[10][10],maxx;
double l;

int sqr(int k)
{
    return k*k;
}

int main()
{
    freopen("team.in","r",stdin);
    freopen("team.out","w",stdout);
    for (int i=1;i<=3;i++)
        for (int j=1;j<=3;j++)
            scanf("%i",&a[i][j]);
    maxx = sqr(a[1][1]) + sqr(a[2][2]) + sqr(a[3][3]);
    for (int i=1;i<=3;i++)
        for (int j=1;j<=3;j++)
            for (int k=1;k<=3;k++)
                if ( (i!=j) && (j!=k) && (i!=k) && ( sqr(a[1][i])+sqr(a[2][j])+sqr(a[3][k]) > maxx))
                    maxx = sqr(a[1][i])+sqr(a[2][j])+sqr(a[3][k]);
    l = sqrt(maxx);
    printf("%.10g",l);
    return 0;
}
