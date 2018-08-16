#include <iostream>
#include <map>
#include <stdio.h>
#include <iterator>
using namespace std;

map <string, string> m;
map <string, string> :: iterator it;
int n,k;

int main()
{
    //freopen("input.inp","r",stdin);
    cin>>n>>k;
    for (int i=1; i<=n; i++){
        string name, ip;
        cin>>name>>ip;
        m[ip]=name;
    }
    for (int i=1; i<=k;i++){
        string cmd,ip;
        cin>>cmd>>ip;
        ip= ip.substr(0, ip.size()-1);
        cout<<cmd<<" "<<ip<<"; #"<<m[ip]<<endl;
    }
    return 0;
}
