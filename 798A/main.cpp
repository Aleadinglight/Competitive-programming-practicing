#include <iostream>
#include <string.h>
using namespace std;

char st[100];

int main()
{
    cin>>st;
    int d=0,l=0,r=strlen(st)-1;
    while (l<=r){
        if (st[l]!=st[r])
            d++;
        l++;
        r--;
    }
    if (d<=1){
        if (d==0 && strlen(st)%2==0){
            cout<<"NO";
            return 0;
        }
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
