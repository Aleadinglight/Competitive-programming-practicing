#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n%10==0){
        cout<<n;
    }
    else {
        if (n%10>5){
            cout<<n+10-n%10;
        }
        else
            cout<<n-n%10;
    }
    return 0;
}
