#include <iostream>
#include <algorithm>
using namespace std;
long long n,m,tg,th;
int main()
{
    cin>>n;
    if (n%2==0)
        tg=n/2;
    else
        tg=(n-1)/2-n;
    cout<<tg;
    return 0;
}
