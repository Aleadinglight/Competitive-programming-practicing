#include <iostream>

using namespace std;
int n,m,minn,kt=0;
int main()
{
    cin>>n>>m;
    minn=n;
    for (int i=0;i<=(n/2);i++){
        int j=n-2*i;
        if ((i+j)%m==0 && (i+j<=minn)){
            minn=i+j;
            kt=1;
        }
    }
    if (kt==0)
        cout<<"-1";
    else
        cout<<minn;
    return 0;
}
