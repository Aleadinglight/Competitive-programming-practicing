#include <iostream>

using namespace std;

int main()
{
    int n,a,b,kt=0;
    cin>>n>>a>>b;
    for (int i=0;i<=n/b; i++){
        if( (n-i*b)%a==0){
            cout<<"YES\n";
            cout<<(n-i*b)/a<<" "<<i;
            kt=1;
            break;
        }
    }
    if (kt==0)
        cout<<"NO";
    return 0;
}
