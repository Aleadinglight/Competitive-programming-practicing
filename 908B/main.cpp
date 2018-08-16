#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

string st, ins;
int d[10], a[100][100],x,y,n,m;
vector <string> ways;


void sinh(int i){
    if (i==4){
        ways.push_back(st);
        //cout<<ways[dem-1]<<endl;
        return;
    }
    for (int k=0; k<4; k++){
        if (d[k]==0){
            d[k]=1;
            st=st+char(k+'A');
            sinh(i+1);
            st = st.substr(0, st.length()-1);
            d[k]=0;
        }
    }
}


void input(){
    //freopen("input.inp","r", stdin);
    cin>>n>>m;
    string temp;
    for (int i=1; i<=n; i++){
        cin>>temp;
        for (int j=0; j<temp.size(); j++){
            if (temp[j]=='#')
                a[i][j+1]=-1;
            if (temp[j]=='S'){
                x=i;
                y=j+1;
            }
            if (temp[j]=='E'){
                a[i][j+1]=1;
            }
        }
    }
    cin>>ins;
    /*cout<<ins<<endl;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++)
            cout<<a[i][j];
        cout<<endl;
    }*/
}

void tim(){
    int q,w, dem=0;
    for (int i=0;(int) i<ways.size(); i++){
        q=x;
        w=y;
        for (int j=0;(int) j<ins.size(); j++){
            int t=ins[j]-'0';
            if (ways[i][t]=='A'){
                q=q-1;
            }
            if (ways[i][t]=='B'){
                w=w+1;
            }
            if (ways[i][t]=='C'){
                q=q+1;
            }
            if (ways[i][t]=='D'){
                w=w-1;
            }
            if (a[q][w]==1){
                dem++;
                break;
            }
            if (a[q][w]==-1 || q==0 || q==n+1 || w==0 || w==m+1){
                break;
            }
        }
    }
    cout<<dem;
}

int main()
{
    sinh(0);
    input();
    tim();
    return 0;
}
