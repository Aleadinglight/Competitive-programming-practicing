#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;
int f1c,f1t,f2c,f2t,k,l,q;
string a,b;
double pos=0.0;
int main()
{
    freopen("","r",stdin);
    cin>>a;
    cin>>b;
    for (int i=0;i<a.size();i++){
        char c=a[i],d=b[i];
        if (a[i]=='+')
            f1c++;
        else
            f1t++;
        if (b[i]=='+')
            f2c++;
        if (b[i]=='-')
            f2t++;
    }
    k=f1c-f2c;
    l=f1t-f2t;
    if (k<0 || l<0)
    {
        cout<<pos;
        return 0;
    }
    int tc=1,tcl=1,tck=1,km=1;
    for (int i=1;i<=(k+l);i++){
        tc=tc*i;
        if (i<=l)
            tcl=tcl*i;
        if (i<=k)
            tck=tck*i;
        km=km*2;
    }
    tc=tc/(tcl*tck);
    pos=1.0*tc/km;
    printf("%.9lf",pos);
    return 0;
}
