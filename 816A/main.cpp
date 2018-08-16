#include <iostream>

using namespace std;
char st[100];
int main()
{
    cin>>st;
    int a=(st[0]-'0')*10+(st[1]-'0'), b=(st[3]-'0')*10+(st[4]-'0'), c=(st[1]-'0')*10+(st[0]-'0');
    if (c>=b && c<=59)
        cout<<c-b;
    else{

        if (a==23)
            cout<<60-b;
        else{
            int t=60-b;
            a++;
            c=(a%10)*10+(a/10%10);
            while (c>59){
                t+=60;
                a++;
                c=(a%10)*10+(a/10%10);
            }
            cout<<t+c;
        }
    }
    return 0;
}
