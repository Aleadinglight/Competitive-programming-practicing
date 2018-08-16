#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int d=1;
    while (true){
        if (d%2!=0)
            n=n-d;
        else
            m=m-d;
        d++;
        if (n<0)
        {
            cout<<"Vladik";
            return 0;
        }
        if (m<0){
            cout<<"Valera";
            return 0;
        }

    }
    return 0;
}
