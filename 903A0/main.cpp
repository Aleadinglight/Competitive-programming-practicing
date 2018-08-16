#include <iostream>

using namespace std;

int main()
{
    int n,kt,x;
    cin>>n;
    for (int x=10000; x<=1000000000; x++){
        //cin>>x;
        kt=0;
        for (int j=0; j<=x; j++){
            if (7*j>x)
                break;
            if ((x-7*j)%3==0){
                kt=1;
                break;
            }
        }
        cout<<"asd"<<endl;
        if (kt==0){
            cout<<x<<endl;
            break;
        }
    }
    return 0;
}
