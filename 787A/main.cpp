#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,dd=0;
    cin>>a>>b;
    cin>>c>>d;
    int ans=-1;
    for (int i=1;i<=10000000;i++)
        if ((d+i*c-b)%a==0)
        {
            ans=d+i*c;
            dd++;
            if (dd==1)
                break;
        }
    cout<<ans;
    return 0;
}
