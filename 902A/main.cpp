#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b,c,d;
    cin>>n>>m;
    int kt=1;
    d=0;
    for (int i=1; i<=n; i++){
        cin>>a>>b;
        if ( a>d){
            kt=0;
        }
        d=max(d,b);
    }
    if (kt==0 || d<m){
        cout<<"NO";
    }
    else
        cout<<"YES";
    return 0;
}
