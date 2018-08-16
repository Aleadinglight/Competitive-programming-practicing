#include <iostream>
#include <map>
#include <stdio.h>
#include <iomanip>

using namespace std;
map <int, int> m;
long double tg;
long long sub;
int main()
{
    int n,k;

    //freopen("input.inp","r",stdin);
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>k;
        int l=m[k-1], r=m[k+1];
        tg+= 1LL*k*(i-1) + sub + m[k+1] - m[k-1];
        sub-=k;
        m[k]++;
    }
    cout<< fixed<<setprecision(0)<<tg;
    return 0;
}
