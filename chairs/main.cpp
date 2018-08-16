#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1||n==2||n==4||n==5||n==8||n==11){
            cout << "NO"<<endl;

        }
        else{
            cout << "YES"<<endl;
        }
    }
    return 0;
}
