#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> ans;
int a[10],m,n;
int main()
{
    cin>>n;
    while (n>0)
    {
        m++;
        a[m]=n%10;
        n/=10;
    }
    int l=1,r=m;
    while (l<r)
    {
        swap(a[l],a[r]);
        l++;
        r--;
    }
    int tc=1;
    while (tc>0)
    {
        tc=0;
        for (int i=1;i<=m;i++)
        {
            if (a[i]>0){
                tc=tc*10+1;
                a[i]--;
            }
            else
                tc=tc*10;
        }
        if (tc>0)
            ans.push_back(tc);
    }
    cout<<ans.size()<<"\n";
    for (int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}
