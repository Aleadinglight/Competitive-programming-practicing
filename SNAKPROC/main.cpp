#include <iostream>
#include <string>

using namespace std;

int main()
{
    string st;
    int n,T;
    cin>>T;
    while (T--){
        cin>>n;
        cin>>st;
        int temp=0;
        for (int i=0; i<st.length(); i++){
            if (st[i]=='H')
                temp++;
            if (st[i]=='T')
                temp--;
            if (temp>1 || temp<0){
                break;
            }
        }
        if (temp==0){
            cout<<"Valid"<<endl;
        }
        else
            cout<<"Invalid"<<endl;
    }
    return 0;
}
