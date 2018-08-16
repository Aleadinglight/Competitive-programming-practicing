#include <iostream>
#include <algorithm>
using namespace std;
int n, a[200000];
int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        a[k]++;
    }
    for (int i=1;i<=100000;i++){
        if (a[i]%2==1){


            cout<<"Conan";
            return 0;
        }
    }
    cout<<"Agasa";
    return 0;
}
