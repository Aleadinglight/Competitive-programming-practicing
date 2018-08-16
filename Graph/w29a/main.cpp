#include <iostream>

using namespace std;
int n;
int caseof1()
{
    int k=28;
    if ((n%4==0 && n%100!=0) || (n%400==0))
        k++;
    return 256-(5*31+2*30+k);
}

int caseof2()
{
    int k=28;
    if (n%4==0)
        k++;
    return 256-(5*31+2*30+k);
}

int caseof3()
{
    return 26;
}

int main()
{
    cin>>n;
    int ans;
    if (n>=1700 && n<1918)
        cout<<caseof2()<<"."<<"09."<<n;
    else if (n>1918 && n<=2700)
        cout<<caseof1()<<"."<<"09."<<n;
    else
        cout<<caseof3()<<"."<<"09."<<n;

    return 0;
}
