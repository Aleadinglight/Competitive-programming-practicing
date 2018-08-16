#include <stdio.h>

using namespace std;
int a[200],t[200],l[200],n,m;
int main()
{
    scanf("%i %i",&n,&m);
    for (int i=1;i<=m;i++){
        scanf("%i",&l[i]);
        if (l[i]==n)
            l[i]=0;
    }
    for (int i=1;i<m;i++){
        for (int j=1;j<=n;j++)
            if (a[l[i]]==0){
                if (((l[i]+j)%n==l[i+1]) && (t[j]==0)){
                    t[j]=1;
                    a[l[i]]=j;
                    break;
                }
            }
            else{
                if ((l[i]+a[l[i]])%n!=l[i+1]){
                    printf("-1");
                    return 0;
                }
            }
    }
    a[n]=a[0];
    for (int i=1;i<=n;i++)
        if (a[i]==0){
            for (int j=1;j<=n;j++)
                if (t[j]==0){
                    t[j]=1;
                    a[i]=j;
                    break;
                }
            if (a[i]==0)
            {
                printf("-1");
                return 0;
            }
        }
    for (int i=1;i<=n;i++)
        printf("%i ",a[i]);
    return 0;
}
