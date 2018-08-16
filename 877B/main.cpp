#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int maxb[6000],fa[6000], fb[6000];
char st[6000];
int main()
{
    scanf("%s",st);
    if (st==""){
        cout<<"0";
        return 0;
    }
    for (int i=strlen(st)-1; i>=0; i--)
        if (st[i]=='b'){
            fb[i]=1;
            fa[i]=fa[i+1];
        }
        else
            fa[i]=fa[i+1]+1;

    for (int i=strlen(st)-1; i>=0; i--)
        maxb[i] = fb[i]+ max(maxb[i+1],fa[i+1]);

    int ans=maxb[0], da=0;
    for (int i=0; i<strlen(st); i++){
        if (st[i]=='a')
            da++;
        ans = max(ans, da+maxb[i+1]);
    }
    cout<<ans;
    return 0;
}
