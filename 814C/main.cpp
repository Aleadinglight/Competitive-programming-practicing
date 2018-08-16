#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
char st[1510],c;
int r[1510],l[1510],n,q,m,ans,d,b[1510];
void init(){

    if (st[0]==c)
        l[0]=1;
    else{
        d++;
        b[d]=0;
        l[0]=0;
    }

    if (st[n-1]==c)
        r[n-1]=1;
    else
        r[n-1]=0;

    for (int i=1;i<strlen(st);i++)
        if (st[i]==c)
            l[i]=l[i-1]+1;
        else {
            d++;
            b[d]=i;
            l[i]=0;
        }

    for (int i=strlen(st)-2;i>=0;i--)
        if (st[i]==c)
            r[i]=r[i+1]+1;
        else
            r[i]=0;
}

int main()
{
    freopen("","r",stdin);
    scanf("%i\n",&n);
    scanf("%s\n",st);
    scanf("%i",&q);
    for (int T=1;T<=q;T++){
        scanf("%i %c",&m,&c);
        d=0;
        init();
        ans=0;
        if (d==0)
            ans=n;
        for (int i=1;i<=d;i++){
            int t,tl=0,tr=0,tm=0;

            if (i-m+1>=1)
                t=i-m+1;
            else
                t=1;

            if (b[t]==0)
                tl=0;
            else
                tl=l[b[t]-1];

            if (b[i]==n-1)
                tr==0;
            else
                tr=r[b[i]+1];
            tm=b[i]-b[t]+1;
            ans=max(ans,tl+tr+tm);
        }
        printf("%i\n",ans);
    }

    return 0;
}
