#include <iostream>

using namespace std;

int main()
{
    int s,a1,a2,t1,t2;
    cin>>s>>a1>>a2>>t1>>t2;
    int u = t1*2+a1*s, v=t2*2+a2*s;
    if (u==v){
        cout<<"Friendship";
    }
    else if (u<v)
        cout<<"First";
    else
        cout<<"Second";
    return 0;
}
