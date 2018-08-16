#include <iostream>
#include <string>
using namespace std;
string st;

int main()
{
    cin>>st;
    long long ans=0;
    for (int i=0; i<st.size(); i++){
        int tg=0, luu=0;
        for (int j=i; j<st.size(); j++){

            if (st[j]=='(')
                tg++;
            if (st[j]==')')
                tg--;
            if (st[j]=='?'){
                if (tg>0)
                    tg--;
                else
                    luu++;
            }
            if (tg<0){
                if (luu>0)
                    luu--;
                else
                    break;
            }
            if (tg==0 && luu%2==0)
                ans++;
        }
    }
    cout<<ans;
    return 0;
}
