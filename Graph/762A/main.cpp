#include <iostream>
#include <math.h>
using namespace std;
long long n,a[10000000];
int k,l=0,d;
int main()
{
    cin>>n>>k;
    for (int i=1;i<=sqrt(n);i++)
        if (n%i==0)
        {
            d++;
            if (d==k)
            {
                cout<<i;
                return 0;
            }
            if  (1LL*2*d-k+1>0){
                cout<<1LL*2*d-k+2;
                return 0;
            }
        }
    cout<<"-1";
    return 0;
}
