#include <stdio.h>

using namespace std;

int t,n;

char s[300000];

void out()
{
    for (int i=0;i<n;i++)
        printf("%c",s[i]);
}

void tang(int k)
{
    n=k+1;
    while ((s[k]=='9') && (k>0))
    {
        s[k]='0';
        k--;
    }
    if (s[k]=='9'){
        s[k]='0';
        printf("1");
        out();
    }
    else{
        s[k]++;
        out();
    }
}

int main(){
    int m=n,l,q;
    freopen("","r",stdin);
    scanf("%i %i",&n,&t);
    scanf("%s",s);
    for (int i=0;i<n;i++)
        if (s[i]=='.'){
            l=i;
            break;
        }
    for (int i=l;i<n;i++)
        if (s[i]>='5')
        {
            l=i;
            break;
        }
    if (s[l]=='.')
    {
        out();
        return 0;
    }
    while (t--)
    {
        if (s[l] >= '5')
        {
            if (s[l-1] == '.')
            {
                tang(l-2);
                return 0;
            }
            else
            {
                s[l-1]++;
            }
        }
        else
            break;
        n=l;
        l--;
    }
    out();
    return 0;
}
