#include <iostream>

using namespace std;

int n,m;
int main()
{
    cin>>n>>m;
    int tg;
    if ((n==1) || (n==3) || (n==5) || (n==7) || (n==8) || (n==10) || (n==12))
        tg =31;
    else
        tg =30;
    if (n==2)
        tg=28;
    tg=tg-(7-m+1);
    int d=1;
    while(tg>0)
    {
        tg-=7;
        d++;
    }
    cout<<d;
    return 0;
}
