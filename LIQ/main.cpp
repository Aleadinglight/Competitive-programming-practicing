#include <stdio.h>
#include <algorithm>
#include <heap>
using namespace std;
int a[3000],n,maxx,f[3000];
int main()
{
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
    for (int i=1;i<=n;i++){
        f[i]=heap[1]+1;
        upheap(f[i]);
    }
    for (int i=1;i<=n;i++)
        maxx = max(maxx,f[i]);
    printf("%i",maxx);
    return 0;
}
