#include <iostream>
#include <algorithm>
using namespace std;
long long tg=0;
int n,maxx=-1,a[200];
int main()
{
    cin>>n;
    for (int i =1; i<=n;i++)
    {
        cin>>a[i];
        maxx = max(a[i],maxx);
    }
    for (int i=1;i<=n;i++)
        tg=tg+(maxx-a[i]);
    cout<<tg;
    return 0;
}
