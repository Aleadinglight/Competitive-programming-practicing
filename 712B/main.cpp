#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;
char c[300000];
int a[10],n,k,l;
void input()
{
    freopen("","r",stdin);
    gets(c);
    n=strlen(c);
}

void xuli()
{
    for (int i=0;i<n;i++)
        if (c[i]=='R')
            a[0]++;
        else if (c[i]=='L')
            a[1]++;
        else if (c[i]=='U')
            a[2]++;
        else if (c[i]=='D')
            a[3]++;
    k=abs(a[0]-a[1]);
    l=abs(a[2]-a[3]);
    if ((k+l)%2==1)
    {
        printf("-1");
        return;
    }
    printf("%i",(k+l)/2);
}

int main()
{
    input();
    xuli();
    return 0;
}
