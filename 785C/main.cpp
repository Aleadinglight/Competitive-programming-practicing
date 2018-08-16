#include <iostream>
#include <math.h>
using namespace std;
long long n,m,tg,ans,temp;
int main()
{
    cin>>n>>m;
    if (n<=m){
        cout<<n;
        return 0;
    }
    ans=m;
    temp=n-m;
    double i=0.0;
    i = 1.*(-1+ sqrt(1+8*temp))/2;
    long long j=(long long) i-1;
    while (tg<temp){
        tg=(j*(j+1))/2;
        j++;
    }
    ans+=j-1;
    cout<<ans;
    return 0;
}
