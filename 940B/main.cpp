#include <iostream>

using namespace std;
int n,k,a,b;
long long tg, tg2;
int main()
{
    cin>>n>>k>>a>>b;
    if (k==1){
        cout<<1LL*a*(n-1);
        return 0;
    }
    tg2=4e18+1;
    while (n>=k){
        tg2=min(tg2, tg+1LL*a*(n-1));
        if (n%k!=0){
            tg=tg+1LL*a*(n%k);
            n=n-n%k;
        }
        tg+=b;
        n=n/k;
    }
    if (n!=1)
        tg+=1LL*(n-1)*a;
    cout<<min(tg,tg2);
    return 0;
}
