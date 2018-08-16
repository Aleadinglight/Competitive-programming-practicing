#include <iostream>
#include <stdio.h>
using namespace std;
int tg,k,n;
double ans;
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>k;
        tg=tg+k;
    }
    ans = 1.0*tg/n;
    printf("%.9lf",ans);
    return 0;
}
