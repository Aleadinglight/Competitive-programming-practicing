#include <iostream>
#include <algorithm>
using namespace std;
struct bang{
int x,y;
};

bang a[100010];
int n;

bool sosanh(const bang &q, const bang &p){
    return (q.x<p.x);
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+1+n,sosanh);
    if (a[2].x>0 || a[n-1].x<0){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}
