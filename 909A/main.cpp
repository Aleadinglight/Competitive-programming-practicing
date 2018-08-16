#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector <string> v;
int main()
{

    string a,b,st="";
    cin>>a>>b;
    for (int i=0;i<a.length(); i++){
        st=st+a[i];
        string st1="";
        for (int j=0; j<b.length(); j++){
            st1=st1+b[j];
            v.push_back(st+st1);
        }
    }
    sort(v.begin(), v.end());
    cout<<v[0];
    return 0;
}
