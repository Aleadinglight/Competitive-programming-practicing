#include <stdio.h>

using namespace std;
int th=0,n,a[1000],f[1000],q[1000],d=0;

void outra()
{
    printf("YES\n%i\n",d);
    printf("1 %i\n",q[1]);
    for (int i=2;i<=d;i++)
        printf("%i %i\n",q[i-1]+1,q[i]);
    th=1;
}

void dequi(int i)
{
    if (th==1)
        return;
    if (i==n)
        outra();
    else
        for (int k=n;k>=i+1;k--)
        {
            if (f[k]-f[i]!=0)
            {
                d++;
                q[d]=k;
                dequi(k);
                d--;
            }
        }
}

void xuli()
{
    for (int i=1;i<=n;i++)
        f[i]=f[i-1]+a[i];
    dequi(0);
}

int main()
{
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
    xuli();
    if (th==0)
        printf("NO");
    return 0;
}

































































































































































