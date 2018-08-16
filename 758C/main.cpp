#include <iostream>

using namespace std;
long long k;
int n,m,x,y;

long long f(int x, int y)
{
    if (n==1)
    {
        return k/m + ((k%m)>=y);
    }
    else{
        long long T = n*m + (n-2)*m;
        long long period = k/T;
        long long remain = k%T;
        if (x==1 || x==n)
        {
            return period + (remain>=(x-1)*m + y );
        }
        return 2*period + (remain>=(x-1)*m+y) + (remain>= n*m+ (n-x-1)*m+y);
    }
}

int main()
{
    cin>>n>>m>>k>>x>>y;
    cout<<max(max(f(1,1),f(2,1)),f(n-1,1))<<" "<<f(n,m)<<" "<<f(x,y);
    return 0;
}
