#include <stdio.h>

using namespace std;
int n,a[300000];
void input()
{
    freopen("","r", stdin);
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
    for (int i=1;i<=n;i++)
        printf("%i ",a[i]+a[i+1]);
}

int main()
{
    input();
    return 0;
}
