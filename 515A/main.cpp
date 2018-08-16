#include <iostream>
#include <algorithm>
using namespace std;
int a,b,s;
int main()
{
    cin>>a>>b>>s;
    if ((s-abs(a)-abs(b)>=0) && ((s-abs(a)-abs(b))%2==0))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
