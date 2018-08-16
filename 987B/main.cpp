#include <iostream>
#include <math.h>
using namespace std;
int x,y;
int main()
{
    cin>>x>>y;
    if (1LL*y*log10(x)>1LL*x*log10(y))
        cout<<">";
    else if (1LL*y*log10(x)<1LL*x*log10(y))
        cout<<"<";
    else
        cout<<"=";
    return 0;
}
