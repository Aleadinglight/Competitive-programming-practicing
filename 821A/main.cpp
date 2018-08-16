#include <stdio.h>

using namespace std;
int n,a[100][100];
int main()
{
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++){
            scanf("%i",&a[i][j]);
        }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (a[i][j]!=1){
                int kt=0;
                for (int l=1;l<=n;l++)
                    for (int k=1;k<=n;k++)
                        if (a[i][l]+a[k][j]==a[i][j]){
                            kt=1;
                            break;
                        }
                if (kt==0){
                    printf("No");
                    return 0;
                }
            }
    printf("Yes");
    return 0;
}
