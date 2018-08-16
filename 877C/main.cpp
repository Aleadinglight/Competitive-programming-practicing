#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n%2==0)
        printf("%i\n",(n/2)*3);
    else
        printf("%i\n",(n/2)*3+1);
    for (int i=2; i<=n; i+=2){
        printf("%i ",i);
    }
    for (int i=1; i<=n; i+=2){
        printf("%i ",i);
    }
    for (int i=2; i<=n; i+=2){
        printf("%i ",i);
    }
    return 0;
}
