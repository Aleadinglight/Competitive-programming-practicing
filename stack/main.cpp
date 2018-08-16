#include <iostream>

using namespace std;


void push(int a[],int i, int *d)
{
    *d++;
    a[*d]=i;
}

int main()
{
    int n,a[100],d;
    cin>>n;
    for (int i=1;i<=n/2;i++)
        push(a,i,&d);
    for (int i=1;i<=n/2;i++)
        cout<<a[i]<<" ";
    return 0;
}
