#include <stdio.h>
#include <algorithm>
using namespace std;

int n,m,a,b,c,d,mind=1000000000,minb=1000000000,maxc=-1,maxa=-1;
void input()
{
    freopen("","r", stdin);
    scanf("%i",&n);
    for (int i=1;i<=n;i++){
        scanf("%i %i",&a,&b);
        minb=min(b,minb);
        maxa=max(a,maxa);
    }

    scanf("%i",&m);
    for (int i=1;i<=m;i++){
        scanf("%i %i",&c,&d);
        mind=min(d,mind);
        maxc=max(c,maxc);
    }
}

int main()
{
    input();
    if (maxc-minb>0 && maxa-mind>0)
    {
        printf("%i",max(maxc-minb, maxa-mind));
    }
    else if (maxc-minb>0 && maxa-mind<=0)
    {
        printf("%i", maxc-minb);
    }
    else if (maxc-minb<=0 && maxa-mind>0)
    {
        printf("%i", maxa-mind);
    }
    else
        printf("0");
    return 0;
}
