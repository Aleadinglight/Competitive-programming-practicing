#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int a[100010],n,k,t;
int main()
{
    scanf("%i %i %i",&n,&k,&t);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
    sort(a+1,a+n+1);

    long long d=0,used=0,ans=0;

    for (int i=1;i<=n;i++){
        d=a[i]/k;
        if (a[i]%k!=0)
            d++;
        if (d+used<=t){
            used+=d;
            ans++;
        }
        else
            break;
    }

    printf("%i",ans);
    return 0;
}
