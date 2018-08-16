#include <iostream>
#include <string.h>
using namespace std;

char st[20];
int k;

int main()
{
    cin>>st;
    cin>>k;
    int i,d=0;
    for (i=strlen(st)-1;i>=0;i--)
    {
        if (st[i]=='0')
            d++;
        if (d==k)
            break;
    }
    if (d!=k){
        cout<<strlen(st)-1;
    }
    else{
        cout<<(strlen(st)-i-k);
    }
    return 0;
}
