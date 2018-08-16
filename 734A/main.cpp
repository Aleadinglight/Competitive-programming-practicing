#include <iostream>
#include <string>
using namespace std;
string st;
int n,a,d;
int main()
{
    cin>>n;
    cin>>st;
    for (int i=0;i<n;i++)
        if (st[i]=='D')
            d++;
        else
            a++;
    if (a>d)
        cout<<"Anton";
    else if (a<d)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
