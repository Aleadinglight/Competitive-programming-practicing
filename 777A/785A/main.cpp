#include <iostream>

using namespace std;

int main()
{
    int n,tg;
    char a[100];
    cin >>n;
    tg=0;
    for (int i=1;i<=n;i++){
        cin>>a;
        switch (a[0]){
        case 'T':
            tg+=4;
            break;
        case 'C':
            tg+=6;
            break;
        case 'O':
            tg+=8;
            break;
        case 'D':
            tg+=12;
            break;
        case 'I':
            tg+=20;
            break;
        }
    }
    cout<<tg;
    return 0;
}
