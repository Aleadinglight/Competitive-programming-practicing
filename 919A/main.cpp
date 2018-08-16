#include <iostream>
#include <stdio.h>
using namespace std;
int n,m,k,l;
int main()
{
    double minn=1e6*1.;
    cin>>n>>m;
    for (int i=1; i<=n; i++){
        cin>>k>>l;
        minn=min(minn, 1.0*k/l);
    }
    printf("%.9lf",minn*m);
    return 0;
}
