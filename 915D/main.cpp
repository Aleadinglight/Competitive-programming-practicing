#include <iostream>
#include <vector>
#include <stack>
#include <stdio.h>

using namespace std;
typedef pair <int, int> ii;
int n,m, visit[200], des, dem, kt;
vector <vector<int> > a;
stack <ii> edge;

void delete_edges(){
    dem++;
    kt=1;
    while (edge.size()>0 && edge.top().first != des){
        int x=edge.top().first, y=edge.top().second;
        a[x][y]=-1;
        edge.pop();
    }
    int x=edge.top().first, y=edge.top().second;
    a[x][y]=-1;
    edge.pop();
}

void tim(int i){
    for (int k=0; k<a[i].size(); k++){
        int temp=a[i][k];
        if (a[i][k]!=-1 && visit[a[i][k]]==0){
            visit[a[i][k]]=1;
            edge.push(make_pair(i, k));
            tim(a[i][k]);
            visit[a[i][k]]=0;
            if (edge.size()>0)
                edge.pop();
            if (kt)
                return;
        }
        else if (a[i][k]!=-1 && a[i][k]==des){
            delete_edges();
        }
    }
}

int main()
{
    freopen("input.inp","r",stdin);
    int x,y;
    cin>>n>>m;
    a.resize(n+1);
    for (int i=1; i<=m; i++){
        cin>>x>>y;
        a[x].push_back(y);
    }
    for (int i=1; i<=n; i++){
        des=i;
        if (i==4){
            cout<<"";
        }
        kt=0;
        visit[i]=1;
        tim(i);
        if (dem>1){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
