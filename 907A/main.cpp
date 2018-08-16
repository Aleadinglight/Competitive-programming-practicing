#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (d>2*c || 2*d<c){
        cout<<-1;
        return 0;
    }
    else{
        if (d>c)
            c=d;
        if (2*d+1>2*b){
            cout<<-1;
            return 0;
        }
        if (b<2*d+1)
            b=2*d+1;
        if (b+1>2*a){
            cout<<-1;
            return 0;
        }
        if (a<b+1)
            a=b+1;
    }
    cout<<a<<endl<<b<<endl<<c;
    return 0;
}
