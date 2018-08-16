#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
string st;
int x,y, a[20][20];
int main()
{
    //freopen("input.inp","r",stdin);
    int t=1,q;
    for (int i=1; i<=11; i++){
        getline(cin,st);
        if (i==7){
            x=0;
        }
        if (i==4 || i==8)
            continue;
        q=1;
        for (int j=0; j<st.length(); j++){
            if (st[j]=='x')
                a[t][q]=1;
            else if (st[j]=='o')
                a[t][q]=2;
            if (st[j]!=' ')
                q++;
        }
        t++;
    }
    cin>>x>>y;
    x=x%3;
    y=y%3;
    if (x==0)
        x=3;
    if (y==0)
        y=3;
    int l=(x-1)*3+1, r=(y-1)*3+1, d=0;
    for (int i=l; i<=3*x; i++)
        for (int j=r; j<=3*y; j++)
            if (a[i][j]==0){
                a[i][j]=3;
                d++;
            }
    if (d==0){
        for (int i=1; i<=9; i++)
            for (int j=1; j<=9; j++)
                if (a[i][j]==0)
                    a[i][j]=3;
    }
    for (int i=1;i<=9; i++) {
        for (int j=1; j<=9; j++){
            if (j==4 || j==7)
                cout<<" ";
            if  (a[i][j]==1)
                cout<<"x";
            else if (a[i][j]==0)
                cout<<".";
            else if (a[i][j]==2)
                cout<<"o";
            else
                cout<<"!";
        }
        cout<<endl;
        if (i==3 || i==6)
            cout<<endl;
    }
    return 0;
}
