#include<stdio.h>


using namespace std;
int n, m=0;
char a[3000][3000];
int main()
{
    freopen("","r", stdin);
    freopen("","w",stdout);
    scanf("%i \n",&n);
    for (int i=1; i<=n; i++){
        for (int j=1;j<=5;j++)
            scanf("%c",&a[i][j]);
        scanf("\n");
    }
    for (int i=1;i<=n;i++){
        if ((a[i][1]=='O') && (a[i][2]=='O') )
        {
            a[i][1]='+';
            a[i][2]='+';
            m=1;
            break;
        }
        if ((a[i][4]=='O') && (a[i][5]=='O') )
        {
            a[i][5]='+';
            a[i][4]='+';
            m=1;
            break;
        }
    }
    if (m==1){
        printf("YES \n");
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=5;j++)
                printf("%c",a[i][j]);
            printf("\n");
        }
    }
    else
        printf("NO");
    return 0;
}
