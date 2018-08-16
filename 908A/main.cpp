#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char a[20]="aeiou13579", c[100];
    scanf("%s",c);
    int d=0;
    for (int i=0; i<strlen(c); i++){
        int kt=0;
        for (int j=0; j<strlen(a); j++)
            if (a[j]==c[i])
                kt=1;
        if (kt!=0)
            d++;
    }
    cout<<d;
    return 0;
}
