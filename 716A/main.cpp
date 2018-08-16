#include <stdio.h>

using namespace std;
int n,a[500000],c;
void input()
{
    scanf("%i %i",&n,&c);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);

}

void xuli()
{
    int t=0;
    for (int i=1;i<=n;i++)
        if (a[i]-a[i-1]<=c)
            t++;
        else
            t=1;
    printf("%i",t);
}

int main()
{
    input();
    xuli();
    return 0;
}
