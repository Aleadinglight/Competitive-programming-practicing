#include <iostream>
#include <string>
using namespace std;

int n,m;
string st;
int main()
{
    int l,r;
    char c,d;
    cin>>n>>m;
    cin>>st;
    for (int i=0;i<m; i++){
        cin>>l>>r>>c>>d;
        for (int j=l-1; j<r; j++)
            if (st[j]==c)
                st[j]=d;
    }
    cout<<st;
    return 0;
}
