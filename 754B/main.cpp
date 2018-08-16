#include <iostream>
#include <stdio.h>
using namespace std;
char c;
int a[5][5];

void input()
{
    freopen("input.inp","r",stdin);
    for (int i=1;i<=4;i++)
    {
        for (int j=1;j<=4;j++)
        {
            scanf("%c",&c);
            if (c=='x')
                a[i][j]=1;
            if (c=='.')
                a[i][j]=0;
            if (c=='o')
                a[i][j]=-1;

        }
        scanf("\n");
    }
}

int xuli()
{
    for (int i=1;i<=4;i++)
        for (int j=1;j<=4;j++)
            if (a[i][j]==0)
            {
                if ((a[i-1][j]==1) && (a[i+1][j]==1) && (i-1>0) && (i+1<=4))
                    return 1;
                if ((a[i][j+1]==1) && (a[i][j-1]==1) && (j-1>0) && (j+1<=4))
                    return 1;
                if ((a[i+1][j+1]==1) && (a[i-1][j-1]==1) && (j-1>0) && (j+1<=4) && (i-1>0) && (i+1<=4))
                    return 1;
                if ((a[i-1][j+1]==1) && (a[i+1][j-1]) && (i-1>0) && (j-1>0) && (i+1<=4) && (j+1<=4))
                    return 1;

            }
    return -1;
}

int main()
{
    input();
    if (xuli()==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
