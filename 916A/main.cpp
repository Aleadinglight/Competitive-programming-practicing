#include <iostream>

using namespace std;

bool test(int i){
    while (i>0){
        if (i%10==7)
            return true;
        i=i/10;
    }
    return false;
}

int main()
{
    int n,x,y;
    cin>>n;
    cin>>x>>y;
    int q=x, t=y;
    int j=0;
    while (true){
        if ( test(q) || test(t)){
            break;
        }
        j++;
        t=t-n;
        if (t<0){
            q--;
            if (q<0)
                q=23;
            t=60+t;
        }
    }
    cout<<j;
    return 0;
}
