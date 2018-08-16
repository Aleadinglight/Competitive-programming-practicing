#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int a[100100],b,q,l,n;
long long d=0;
void input()
{
    freopen("input.inp","r",stdin);
    scanf("%i %i %i %i",&b,&q,&l,&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
    sort(a+1,a+1+n);
}

int tim(long long k){
    int l=1,r=n,mid;
    while (l<=r){
        mid=(l+r)/2;
        if (k==a[mid])
            return 1;
        if (k<a[mid])
            r=mid-1;
        if (k>a[mid])
            l=mid+1;
    }
    return -1;
}

void xuli()
{
    if (q==0 || b==0){
        if (b!=0 && tim(b)==-1 && abs(b)<=l)
            d++;
        if (tim(0)==-1)
        {
            printf("inf");
            return;
        }
        else
        {
            printf("%i",d);
            return;
        }
    }
    if (q==1)
    {
        if (tim(b)!=-1)
        {
            printf("0");
            return;
        }
        else
        {
            printf("inf");
            return;
        }
    }
    if (q==-1){
        if (tim(b)!=-1 && tim(-1*b)!=-1)
        {
            printf("0");
            return;
        }
        else
        {
            printf("inf");
            return;
        }
    }

    long long w=b;
    while (abs(w)<=l){
        if (tim(w)==-1){
            d++;
        }
        w=w*q;
    }
    printf("%i",d);
}

int main()
{
    input();
    xuli();
    return 0;
}
