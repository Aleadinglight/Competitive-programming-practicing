#include <iostream>

using namespace std;
int n,m,c,k;
int main()
{
    cin>>n>>c>>m;
    for (int i=1;i<=n;i++)
    {
        cin>>k;
        if (k>c*m)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
