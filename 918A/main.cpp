#include <iostream>
#include <string>
using namespace std;
string st="";
int main()
{   int n;
    cin>>n;
    for (int i=1; i<=n; i++)
        st=st+"o";
    st[0]='O';
    int a=1, b=1;
    while (a+b<=n){
        st[a+b-1]='O';
        int t=b;
        b=a+b;
        a=t;
    }
    cout<<st;
    return 0;
}
