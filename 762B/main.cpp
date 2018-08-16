#include <stdio.h>
#include <algorithm>

using namespace std;
int a[300100],b[300100];
char c[100];
long long tg=0;
int k,l,m,n;
int main()
{
    int q;
    //freopen("input.inp","r",stdin);
    scanf("%i %i %i\n",&k,&l,&m);
    scanf("%i\n",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%i %s\n",&q,c);
        if (c[0]=='U')
        {
            a[0]++;
            a[a[0]]=q;
        }
        else
        {
            b[0]++;
            b[b[0]]=q;
        }
    }
    sort(a+1,a+a[0]+1);
    sort(b+1,b+b[0]+1);
    k=min(k,a[0]);
    for (int i=1;i<=k;i++)
        tg=tg+a[i];
    l=min(l,b[0]);
    for (int i=1;i<=l;i++)
        tg=tg+b[i];
    k++;
    l++;
    while (m>0)
    {
        m--;
        if (k>a[0] && l>b[0])
            break;
        else
        {
            if (a[k]>b[l])
                if (l<=b[0]){
                    tg+=b[l];
                    l++;
                }
                else{
                    tg+=a[k];
                    k++;
                }
            else
                if (k<=a[0]){
                    tg+=a[k];
                    k++;
                }
                else
                {
                    tg+=b[l];
                    l++;
                }
        }
    }
    printf("%i %I64d",k+l-2,tg);
    return 0;
}
