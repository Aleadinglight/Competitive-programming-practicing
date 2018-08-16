#include <stdio.h>
#include <algorithm>
using namespace std;

struct bang{
    int x,y;
};
int n, f[3][100010];
bang a[100010];

int main()
{
    scanf("%i", &n);
    for (int i=1; i<=n; i++){
        scanf("%i %i",&a[i].x,&a[i].y);
    }

    f[0][1] = 0;
    f[1][1] = 1;
    f[2][1] = 1;

    for (int i=2; i<=n; i++){
        if (a[i-1].x+a[i-1].y < a[i].x){
            f[0][i] = max(f[1][i-1],max(f[0][i-1], f[2][i-1]));
            if (a[i].x - a[i].y <= a[i-1].x){
                f[1][i] = -1;
            }
            else if (a[i-1].x + a[i-1].y < a[i].x-a[i].y){
                f[1][i] = max(f[0][i-1],max(f[1][i-1],f[2][i-1]))+1;
            }
            else {
                f[1][i] = max(f[0][i-1],f[1][i-1])+1;
            }
            f[2][i] = max(f[0][i-1],max(f[1][i-1],f[2][i-1]))+1;
        }
        else {
            f[0][i] = max(f[1][i-1],f[0][i-1]);
            if (a[i].x - a[i].y <= a[i-1].x){
                f[1][i] = -1;
            }
            else {
                f[1][i] = max(f[0][i-1],f[1][i-1])+1;
            }
            f[2][i] = max(f[0][i-1],f[1][i-1])+1;
        }
    }
    printf("%i", max(f[0][n],max(f[1][n],f[2][n])));
    return 0;
}









