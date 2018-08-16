#include <stdio.h>
#include <string.h>

using namespace std;

int a[50000],b[50000],cnt=0,T;
char c[50000][1000];

int main()
{
    //freopen("input.inp","r",stdin);
    scanf("%i\n",&T);
    while (T--)
    {
        scanf("\n");
        cnt=0;
        while (true)
        {
            cnt++;
            scanf("%i",&a[cnt]);
            if (getchar()=='\n')
                break;
        }
        for (int i=1;i<=cnt;i++)
        {
            scanf("%s",&c[i]);
        }
        for (int i=1;i<=cnt;i++)
        {
            b[a[i]]=i;
        }
        for (int i=1;i<=cnt;i++)
            printf("%s\n",c[b[i]]);
        if (T>0)
            printf("\n");
    }

    return 0;
}
