#include <stdio.h>
#include <algorithm>
#include <string.h>
#define ii pair<int, int>

using namespace std;
int n,k,t,a[300000];
ii d;
char c[1000];

ii dem( ii d)
{
    for (int i=0; i<n; i++)
        if (i%2==0)
            if (a[i]%2==1)
                d.first++;
            else
                d.second++;
        else
            if (a[i]%2==0)
                d.first++;
            else
                d.second++;
    return d;
}

int main()
{
    scanf("%i\n",&n);
    for (int i=0;i<n;i++){
        scanf("%c",&c);
        if (c[0]=='r')
            a[i]=1;
    }
    d=dem(d);

    if (d.first > d.second)
        t=1;
    else
        t=0;

    for (int i=0;i<n;i++)
    {
        if (a[i]!= t)
            k+=a[i];
        t=1-t;
    }

    printf("%i",max(min(d.first,d.second)-k, k ) );
    return 0;
}
