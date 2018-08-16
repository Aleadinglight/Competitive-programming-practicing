#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

char st[100];

void check()
{
    for (int j=0;j<=255;j++){
        for (int i=0;i<strlen(st);i++){
            st[i]=st[i]^j;
        }
        printf("%s\n",st);
        for (int i=0;i<strlen(st);i++){
            st[i]=st[i]^j;
        }

    }
}

int main()
{
    freopen("input.inp","r",stdin);
    scanf("%s",st);
    check();
    return 0;
}
