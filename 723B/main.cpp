#include <iostream>
#include <string>
using namespace std;

string st;
int n,t[300],dt,dn,maxx,cnt;

void dem(int l)
{
    int k=l;
    st[k]='_';
    k++;
    while (st[k]!=')')
    {
        if ((st[k-1]=='_') && (st[k]!='_'))
            cnt++;
        k++;
    }
    for (int i=l;i<=k;i++)
        st[i]='_';
}

int main()
{
    cin>>n;
    cin>>st;
    for (int i=0;i<n;i++)
        if (st[i]=='(')
        {
            dt++;
            t[dt]=i;
        }
    while (dt>0)
    {
        dem(t[dt]);
        dt--;
    }
    for (int i=0;i<n;i++)
        if (st[i]=='_'){
            if (maxx<dn)
                maxx=dn;
            dn=0;
        }
        else
            dn++;
    if (maxx<dn)
        maxx=dn;
    cout<<maxx<<" "<<cnt;
    return 0;
}
