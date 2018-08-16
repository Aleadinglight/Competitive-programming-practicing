#include <iostream>
#include <map>

using namespace std;
int a[10],n;
string b[6]={"Power","Time","Space","Soul","Reality","Mind"};
int main()
{
    string st;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>st;
        if (st=="purple"){
            a[0]=1;
        }
        if (st=="green"){
            a[1]=1;
        }
        if (st=="blue"){
            a[2]=1;
        }
        if (st=="orange"){
            a[3]=1;
        }
        if (st=="red"){
            a[4]=1;
        }
        if (st=="yellow"){
            a[5]=1;
        }
    }
    cout<<6-n<<endl;
    for (int i=0;i<6;i++){
        if (a[i]==0)
            cout<<b[i]<<endl;
    }
    return 0;
}
