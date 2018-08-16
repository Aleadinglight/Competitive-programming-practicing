#include <iostream>
#include <algorithm>
using namespace std;
long long a,b,tg;
void xuli()
{
    tg=0;
    if (a>b)
        swap(a,b);
    while (a>0)
    {
        long long r = b%a;
        tg += b/a;
        b=a;
        a=r;
    }
}

int main()
{
    cin>>a>>b;
    xuli();
    cout<<tg;
    return 0;
}
