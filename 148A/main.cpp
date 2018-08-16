#include <iostream>
#include <algorithm>
using namespace std;

int k,l,m,n,d;

int lcm(int k, int l)
{
    int a=k,b=l,r;
    if (a>b)
        swap(a,b);
    while (a>0)
    {
        r = b%a;
        b = a;
        a = r;
    }
    return (k*l)/b;
}

int lcm3(int k, int l, int m)
{
    return lcm(lcm(k,l),m);
}

int lcm4(int a, int b, int c, int d)
{
    return lcm(lcm(lcm(a,b),c),d);
}

int main()
{
    cin>>k>>l>>m>>n>>d;
    int n1 = (d/k) + (d/l) + (d/m) + (d/n);
    int n2 = d/lcm(k,l) +d/lcm(k,m) + d/lcm(k,n) + d/lcm(l,m) + d/lcm(l,n) + d/lcm(m,n);
    int n3 = d/lcm3(k,l,m) + d/lcm3(k,l,n) + d/lcm3(k,m,n) + d/lcm3(l,m,n);
    int n4 = d/lcm4(k,l,n,m);
    int ans = n1-n2+n3-n4;
    cout<<ans;
    return 0;
}
