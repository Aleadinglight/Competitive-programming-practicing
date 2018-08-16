#include <iostream>
#include <string>
using namespace std;

int n,a,b,d;
string st;
int main()
{
    cin>>n;
    cin>>st;
    int x=0, y=0, kt=0;
    for (int i=0; i<n; i++){
        if (st[i]=='U'){
            y++;
        }
        else{
            x++;
        }
        if (y>x)
            a=1;
        if (x>y)
            a=-1;
        if (kt==1){
            if (a!=b)
                d++;
            kt=0;
        }
        if (y==x){
            kt=1;
            b=a;
        }
    }
    cout<<d;
    return 0;
}
