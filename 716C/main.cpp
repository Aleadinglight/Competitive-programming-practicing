#include <stdio.h>

using namespace std;
int n;
long long k;
int main()
{
    scanf("%i",&n);
    printf("2\n");
    for (int i=2;i<=n;i++)
    {
        k= (long long )i*(i+1)*(i+1) - (i-1);
        printf("%I64d\n",k);
    }
    return 0;
}
