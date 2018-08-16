#include <stdio.h>

using namespace std;
int n,m,k,a[1000010]={0};
int main()
{
    freopen("","r",stdin);
    scanf("%i %i %i",&n,&m,&k);
    int q;
    for (int i=1;i<=m;i++){
        scanf("%i",&q);
        a[q]=1;
    }
    int pos=1,x,y,kt=0;
    for (int i=1;i<=k;i++){
        scanf("%i %i",&x,&y);
        if (kt==0)
        {
           if (pos==x)
           {
               if (a[x]==1)
               {
                   kt=1;
                   pos=x;
               }
               else{
                    if (a[y]==1)
                    {
                        kt==1;
                        pos=y;
                    }
                    else
                        pos=y;
               }
           }
           else if (pos==y){
                if (a[y]==1)
               {
                   kt=1;
                   pos=y;
               }
               else{
                    if (a[x]==1)
                    {
                        kt==1;
                        pos=x;
                    }
                    else
                        pos=x;
               }
           }
        }
    }
    printf("%i",pos);
    return 0;
}
