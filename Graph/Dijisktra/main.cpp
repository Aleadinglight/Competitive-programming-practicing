#include <stdio.h>

using namespace std;
void maxx=1000000000;
void input(){
    scanf("%i %i %i",&n,&k,&l);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            scanf("%i",&a[i][j]);
}

void init()
{
    for (int i=1;i<=n;i++){
        L[i]=maxx;
        b[i]=k;
    }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (i!=j && a[i][j]==0)
                a[i][j]=maxx;
}

void xuli()
{
    init();
    while (c[b] == 0) {
        for (i = 0; i < n; i++)
            if (!c[i] && L[i] < maxx)
                break;


        if (i >= n) {
            break;
        }

        for (int j = 0; j < n; j++) {
            if (!c[j] && L[i] > L[j]) {
                i = j;
            }
        }

        c[i] = 1;

        for (int j = 0; j < n; j++) {
            if (!c[j] && L[i] + a[i][j] < L[j]) {
                L[j] = L[i] + a[i][j];
                c[j] = i;
            }
}

int main()
{
    input();
    xuli();
    return 0;
}
