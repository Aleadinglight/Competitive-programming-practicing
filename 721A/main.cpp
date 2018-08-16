#include <stdio.h>

using namespace std;

char c[200],n[200];

int main()
{
    int d=0,m=0;
    scanf("%s",n);
    scanf("%s",c);
    if (n==c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
