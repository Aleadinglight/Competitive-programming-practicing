#include <iostream>
#include <vector>
using namespace std;
vector <vector<int> > a;
int n,c[200100],t[200100];
int main()
{
    cin>>n;
    n=n+1;
    for (int i=1;i<=n;i++){
        cin>>t[i];
    }
    a.resize(n+1);
    int u=1,v=1;
    for (int i=2;i<=n;i++){
        for (int j=1; j<=t[i];j++){
            v++;
            a[u].push_back(v);
            c[v]=u;
        }
        u=v;
    }
    int m=u;
    int cha=c[u];
    bool kt=false;
    while (cha!=0){
        if ((int)a[c[cha]].size()>1){
            kt=true;
            break;
        }
        u=c[u];
        cha=c[u];
    }
    if (kt==false){
        cout<<"perfect";
    }
    else{
        cout<<"ambiguous"<<endl;
        for (int i=1;i<=m;i++)
            cout<<c[i]<<" ";
        int temp = (int)a[c[cha]].size()-2;
        c[m]=a[c[cha]][temp];
        cout<<endl;
        for (int i=1;i<=m;i++)
            cout<<c[i]<<" ";
    }
    /*
    for (int i=1;i<=n;i++){
        cout<<i<<"->";
        for (int j=0;j<(int) a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}
