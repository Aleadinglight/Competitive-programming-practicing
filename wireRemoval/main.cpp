#include <bits/stdc++.h>

using namespace std;
vector <vector<int> > a;
int d[100010], cha[100010], dev[100010];

int trace(int i){
    if (i!=1)
        return trace(cha[i])+1;
    else
        return 0;
}

int main() {
    int n;
    freopen("input.inp","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    a.resize(n+1);
    for(int a0 = 0; a0 < n-1; a0++){
        int x;
        int y;
        cin >> x >> y;
        a[x].push_back(y);
        d[x]++;
        cha[y]=x;
    }
    long long tgdev=0;
    for (int i=1;i<=n; i++){
        dev[i]=trace(i);
        tgdev+=dev[i];
    }

    long long tg=0;
    for (int i=1; i<=n; i++){
        for (int j=0; j<a[i].size(); j++){
            tg=tg+dev[a[i][j]]*(n - d[a[i][j]]-1);
        }
    }
    double ans=1.0*tg/tgdev;
    cout<<fixed;
    cout<<setprecision(9);
    cout<<ans;
    return 0;
}
