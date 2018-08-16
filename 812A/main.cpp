#include <iostream>
#include <stdio.h>
using namespace std;
int a[10][10],kt=0,k;
int main()
{
    for (int i=1;i<=4;i++)
        for (int j=1;j<=4;j++)
            scanf("%i",&a[i][j]);

    for (int i=1;i<=4;i++)
        for (int j=1;j<=4;j++){
            if (a[i][j]==1){
                if (j==1){
                    if (i==1)
                        k=4;
                    else
                        k=i-1;
                    if (a[k][4]==1 || a[i][4])
                        kt=1;
                }

                if (j==2){
                    if (i==4)
                        k=2;
                    else if (i==3)
                        k=1;
                    else
                        k=i+2;
                    if (a[k][4]==1 || a[i][4])
                        kt=1;
                }

                if (j==3){
                    if (i==4)
                        k=1;
                    else
                        k=i+1;
                    if (a[k][4]==1 || a[i][4])
                        kt=1;
                }
            }
        }
    if (kt==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
