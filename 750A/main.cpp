#include <stdio.h>

using namespace std;

int n,k;

void input()
{
    scanf("%i %i",&n,&k);
}

void xuli()
{
    int thr=240-k,x=5,tg=0;
    while ((tg+x<=thr) && (x/5<=n))
    {
        tg=tg+x;
        x+=5;
    }
    printf("%i",(x/5)-1);
}

int main()
{
    input();
    xuli();
    return 0;
}
