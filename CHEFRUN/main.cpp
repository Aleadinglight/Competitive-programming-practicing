#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int x1,x2,T,x3,v1,v2;
int main()
{
    cin>>T;
    for (int i=1; i<=T; i++){
        cin>>x1>>x2>>x3>>v1>>v2;
        double t1=1.0*abs(x1-x3)/v1, t2=1.0*abs(x2-x3)/v2;
        if (t1<t2)
            cout<<"Chef";
        else if (t1>t2)
            cout<<"Kefa";
        else
            cout<<"Draw";
        cout<<endl;
    }
    return 0;
}
