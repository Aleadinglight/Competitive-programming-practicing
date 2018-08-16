#include <stdio.h>

using namespace std;
long long a[100010];
long long ts,tf,t,d,n;
int main()
{
    scanf("%i %i %i",&ts,&tf,&t);
    scanf("%i",&n);
    for (int i=1;i<=n;i++){
        scanf("%i",&a[i]);
        if (a[i]<=ts)
            d++;
    }
    if (tf-ts+t*d<=1)
    {
        if (a[1]!=0)
            printf("%i",a[1]-1);
        else
            printf("0");
        return 0;
    }
    else{
        for (int i=1;i<=n;i++){
            if (a[i]<=ts)
                ts=ts+t;
            else{
                if (a[i]-ts>=1)
                {
                    printf("%i",ts);
                    return 0;
                }
                ts=ts+t;
            }
        }
        if (tf-ts>=1){
            printf("%i",ts);
            return 0;
        }

        if (a[1]!=0)
            printf("%i",a[1]-1);
        else
            printf("0");
    }
    return 0;
}
