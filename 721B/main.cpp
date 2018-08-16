#include <iostream>
#include <string>
using namespace std;

int n,k,d[200];

int main()
{
    int dem=0;
    string st;
    cin>>n>>k;
    for (int i=1;i<=n;i++){
        cin>>st;
        d[st.size()]++;
    }
    cin>>st;
    for (int i=1;i<st.size();i++)
        dem=dem+d[i];
    cout<<((dem/k)*5+dem+1)<<" ";

    dem=dem+d[st.size()]-1;
    cout<<((dem/k)*5+dem+1);
    return 0;
}
