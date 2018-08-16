#include <stdio.h>

using namespace std;

void input()
{
    scanf("%i\n",&n);
    scanf("%s",c);
}

void xuli()
{
    if (c[3]>c[4])
        printf("1");
    else
        printf("0");
}

int main()
{
    input();
    xuli();
    return 0;
}
