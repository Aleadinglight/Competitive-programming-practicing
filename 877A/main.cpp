#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> a;
    a.push_back("Danil");
    a.push_back("Olya");
    a.push_back("Slava");
    a.push_back("Ann");
    a.push_back("Nikita");
    string st1;
    getline(cin,st1);
    int d=0;
    for (int i=0; i<a.size(); i++){
        string st=st1;
        while (a[i].length()<=st.length() && st.find(a[i])!=string::npos){
            d++;
            int k=st.find(a[i]);
            for (int j=k; j<k+a[i].length(); j++)
                st[j]='_';
        }
    }
    if (d!=1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
