#include <stdio.h>
#include <string.h>

using namespace std;
char c[100000];
int t,g,a[100],d[100];
void input()
{
    int n=0,m=1;
    freopen("","r",stdin);
    scanf("%s",c);
    t=strlen(c);
    if (t<26)
    {
        printf("-1");
        return;
    }
    else
    {
        for (int k=0;k<=t-26;k++)
        {
            bool th=true;
            for (int i=k;i<k+26;i++)
                if (c[i]!='?')
                    if (a[c[i]-65]==1)
                    {
                        th=false;
                        break;
                    }
                    else
                        a[c[i]-65]=1;
            if (th==true){
                int m=0;
                for (int i=0;i<26;i++)
                    if (a[i]==0)
                    {
                        d[m]=i+65;
                        m++;
                    }
                int f=0;
                for (int i=0;i<t;i++){
                    if ((c[i]=='?') && (i>=k))
                    {
                        c[i]=d[f];
                        f++;
                    }
                    if (f==m)
                        break;
                }
                for (int i=0;i<t;i++)
                    if (c[i]=='?')
                        printf("A");
                    else
                        printf("%c",c[i]);
                return;
            }
            for (int i=0;i<26;i++)
                a[i]=0;
        }
    }
    printf("-1");

}
int main()
{
    input();
    return 0;
}
