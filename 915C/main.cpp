#include <iostream>
#include <string>

using namespace std;
string a,b, ans="";
int d[100], kt=0;

void tim(){
    for (int i=0; i<=9; i++)
        for (int k=1; k<=d[i]; k++)
            ans+=(i+'0');

}

int main()
{
    cin>>a>>b;
    for (int i=0; i<a.length(); i++)
        d[a[i]-'0']++;
    if (a.length()<b.length()){
        string temp="";
        for (int i=0; i<a.length(); i++)
            temp+='9';
        b=temp;
    }
    string save="";
    for (int i=0; i<a.length(); i++){
        for (int j=9; j>=0; j--){
            if (d[j]>0){
                ans+=(j+'0');
                d[j]--;
                tim();
                string temp=ans;
                if (ans<=b && ans>=save){
                    save=ans;
                    ans=ans.substr(0, i+1);
                    break;
                }
                else{

                    ans=ans.substr(0, i);
                    d[j]++;
                }
            }
        }
    }
    cout<<save;
    return 0;
}
