#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int maxx,minn,a,b,c,kq=1000000;
int main()
{
    scanf("%i %i %i",&a,&b,&c);
    if (a>b)
        maxx=a;
    else
        maxx=b;
    if (c>maxx)
        maxx=c;
    minn=a;
    if (minn>b)
        minn=b;
    if (minn>c)
        minn=c;
    for (int i=minn;i<=maxx;i++)
        if (kq> (abs(a-i)+abs(b-i)+abs(c-i)))
            kq=abs(a-i)+abs(b-i)+abs(c-i);
    printf("%i",kq);
    return 0;
}
