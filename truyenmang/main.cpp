#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void nhap(int a[])
{
    for (int i=1;i<=10;i++)
        a[i]=10;
}

int main()
{
    int a[100];
    nhap(a);
    time_t t;
    for (int i=1;i<=10;i++)
        printf("%i ",a[i]);
    cout<<endl;
    srand(time(&t));
    for (int i=1;i<=10;i++)
        printf("%i ",rand());

    return 0;
}
