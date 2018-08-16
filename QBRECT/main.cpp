#include <iostream>
#include <stdio.h>
using namespace std;
int a[1010][1010], t[2000][2000], m, n, D[2000], L[2000], R[2000], maxx;

void init(){
    for (int j=1; j<=m; j++)
        for (int i=1; i<=n; i++)
            if (a[i][j]==1)
                t[i][j]=t[i-1][j]+1;

    /*for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++)
            cout<<t[i][j]<<" ";
        cout<<endl;
    }
    cout<<"-------------------\n";*/
}

void add(int i, int k, int &top){
    while (top>0 && t[i][k]<=t[i][D[top]])
        top--;
    top++;
    D[top]=k;

}

void xuli(){

    for (int i=1; i<=n; i++){
        int top=0;
        D[0]=0;
        for (int j=1; j<=m; j++){
            add(i,j,top);
            L[j]=D[top-1]+1;
        }
        top=0;
        D[0]=m+1;
        for (int j=m; j>=1; j--){
            add(i,j,top);
            R[j]=D[top-1]-1;
        }
        /*
        for (int j=1; j<=m; j++)
            cout<<L[j]<<" ";
        cout<<endl;
        for (int j=1; j<=m; j++)
            cout<<R[j]<<" ";
        cout<<"\n----------------------"<<endl;
        */
        for (int j=1; j<=m; j++){
            maxx=max(maxx, (R[j]-L[j]+1)*t[i][j] );

        }

    }
    cout<<maxx;
}

int main()
{
    //freopen("input.inp","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin>>a[i][j];
    init();
    xuli();
    return 0;
}
