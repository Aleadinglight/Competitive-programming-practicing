#include <iostream>
#include <stdio.h>
using namespace std;
int a,t;
int main()
{
    scanf("%i",&t);
    while (t--)
    {
        scanf("%i",&a);
        if (360 % (180-a) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
