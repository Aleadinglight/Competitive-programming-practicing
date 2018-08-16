#include <stdio.h>
#include <string>

using namespace std;
int n,d[400000];
long long a;

int doi(long long k)
{
    int l=0,p=1;
    while (k>0)
    {
        l=l+ (k%2)*p;
        p=p*2;
        k=k/10;
    }
    return l;
}

int con(long long k)
{
    int l=0,p=1;
    while(k>0)
    {
        l=l+(k%10)*p;
        p=p*2;
        k=k/10;
    }
    return l;
}

void input()
{
    char c;
    freopen("","r",stdin);
    scanf("%i\n",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%c ",&c);
        if (c=='+'){
            scanf("%I64d\n",&a);
            d[doi(a)]++;
        }
        if (c=='-'){
            scanf("%I64d\n",&a);
            d[doi(a)]--;
        }
        if (c=='?'){
            scanf("%I64d\n",&a);
            printf("%i\n",d[con(a)]);
        }

    }
}

int main()
{
    input();
    return 0;
}
