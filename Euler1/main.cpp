#include <iostream>
#include <stdio.h>
using namespace std;

long long tg(int n, int i){
    return 1LL*(i*n+i)*n/2;
}

void xuli()
{
    int T,n;
    long long kq;
    scanf("%i",&T);
    for (int i=1;i<=T;i++){
        scanf("%i",&n);
        kq=tg(n/3,3)+ tg(n/5,5) - tg(n/15,15);
        if (n%3==0 || n%5==0)
            kq=kq-n;
        printf("%lld\n",kq);
    }
}
int main()
{
    xuli();
    return 0;

}
