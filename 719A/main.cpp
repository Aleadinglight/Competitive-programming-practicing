#include <stdio.h>

using namespace std;
int n,a[500];
int main()
{
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
        scanf("%i",&a[i]);
    if (n==1){
        if (a[n]==15)
            printf("DOWN");
        else if (a[n]==0)
            printf("UP");
        else
            printf("-1");
    }
    else{
        if (a[n-1]<a[n])
            if (a[n]==15)
                printf("DOWN");
            else
                printf("UP");
        else
            if (a[n]==0)
                printf("UP");
            else
                printf("DOWN");

    }
    return 0;
}
