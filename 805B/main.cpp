#include <iostream>
#include <string.h>
using namespace std;
char st[200010]={};
char c[3]={'a','b','c'};
int n;
int main()
{
    int kt;
    cin>>n;
    for (int i=1;i<=n;i++)
        for (int j=0;j<3;j++)
        {
            kt=0;
            st[i-1]=c[j];
            st[i]='\0';
            if (i>=3 && st[i-1]==st[i-3]){
                kt=1;
            }
            if (kt==0)
                break;
        }
    cout<<st;
    return 0;
}
