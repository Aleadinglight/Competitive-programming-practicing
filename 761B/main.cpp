#include <stdio.h>
#include <algorithm>

using namespace std;
int a[10000],b[10000],n,l,tg1,tg2;
void input()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    for (int i=0;i<10000;i++)
    {
        scanf("%i %i",&l,&n);
        printf("%i,\n",n);
    }

}

int main()
{
    input();
    return 0;
}
