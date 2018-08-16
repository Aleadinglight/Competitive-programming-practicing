#include <iostream>

using namespace std;
int t[1000000],a,b,c,d,m, cnt;
int main()
{
    cin>>a>>b>>c;
    d=a/b;
    m=a%b;
    while (t[m*10]==0){
        t[m*10]=1;
        d=m*10/b;
        m=m*10%b;
        cnt++;
        if (c==d)
            break;
    }
    if (c==d)
        cout<<cnt;
    else
        cout<<"-1";
    return 0;
}
