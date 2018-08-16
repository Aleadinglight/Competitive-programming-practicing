#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,k,maxx=-1e6;
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>k;
        if (k<0){
            if (k>maxx)
                maxx=k;
        }
        else{
            int t=sqrt(k);
            if (t*t!=k && k>maxx){
                maxx=k;
            }
        }
    }
    cout<<maxx;
    return 0;
}
