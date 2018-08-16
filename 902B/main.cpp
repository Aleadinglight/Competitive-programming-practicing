#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
vector <vector<int> > a;
int n,c[10010],d=0;

void to(int u, int t){
    if (t!=c[u]){
        d++;
        t;
    }
    for (int i=0; i<(int )a[u].size();i++){
        int v=a[u][i];
        to(v,c[u]);
    }
}

int main()
{
    //freopen("input.inp","r",stdin);
    scanf("%i",&n);
    int k;
    a.resize(n+1);
    for (int i=2;i<=n;i++){
        scanf("%i",&k);
        a[k].push_back(i);
    }
    for (int i=1;i<=n;i++){
        scanf("%i",&c[i]);
    }

    /*
    for (int i=1;i<=n; i++){
        printf("%i-> ",i);
        for (int j=0;j<(int )a[i].size();j++)
            printf("%i ",a[i][j]);
        printf("\n");
    }*/
    to(1,0);
    printf("%i",d);
    return 0;
}
