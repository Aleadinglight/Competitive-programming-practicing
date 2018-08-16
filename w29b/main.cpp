#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<string> a;
int n;

bool compare(const string &x, const string &y)
{
    if (x.length()<y.length())
        return true;
    else if (x.length()==y.length()){
        for (int i=0;i<x.length();i++){
            if (x[i]<y[i])
                return true;
            if (x[i]>y[i])
                return false;
        }
        return true;
    }
    else
        return false;
}

int main()
{
    cin>>n;
    string st;
    for (int i=1;i<=n;i++)
    {
        cin>>st;
        a.push_back(st);
    }
    sort(a.begin(),a.end(),compare);
    for (int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
