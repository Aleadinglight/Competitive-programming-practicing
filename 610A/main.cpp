#include <iostream>

using namespace std;
int n,d;
int main()
{
    cin>>n;
    if (n%2==0){
        n=n/2;
        if (n%2==0)
            d=d+n/2-1;
        else
            d=d+n/2;
    }
    cout<<d;
    return 0;
}
