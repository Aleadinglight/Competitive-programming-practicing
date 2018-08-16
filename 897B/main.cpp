#include <iostream>

using namespace std;

long long conn(int k){
    long long retrn=1LL*k, temp=1LL*k;
    while (temp>0){
        retrn = retrn*10+ temp%10;
        temp =temp/10;
    }
    return retrn;
}

int main()
{
    int k,p;
    cin>>k>>p;
    long long ans=0;
    for (int i=1;i<=k; i++){
        ans=(ans+conn(i)%p)%p;
    }
    cout<<ans;
    return 0;
}
