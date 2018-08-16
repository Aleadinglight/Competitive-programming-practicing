#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long a[10000010];
int n,m;
int main() {
    std::ios::sync_with_stdio(false);
    cin>>n>>m;
    int b,c,k;
    for (int i=1;i<=m;i++){
        cin>>b>>c>>k;
        a[b]+=k;
        a[c+1]-=k;
    }
    int tg = 0, ans=0;
    for (int i=1; i<=n; i++){
        tg+=a[i];
        ans=max(tg,ans);

    }
    cout<<ans;
    return 0;
}
