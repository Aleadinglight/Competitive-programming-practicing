#include <iostream>

using namespace std;
int a,b,c,d,tg;
int main()
{
    cin>>a>>b>>c>>d;
    tg=tg+min(min(a,c),d)*256;
    a=a-min(min(a,c),d);
    tg=tg+min(a,b)*32;
    cout<<tg;
    return 0;
}
