#include <iostream>

using namespace std;
int a[100] = {1,1,1,1}; // 0 1 2 3

int loop(int i, int pos){
    int m;

    if (pos == -1){

        if (a[i]==0){
            return -1;
        }
        else {
            return loop(i+1, -1)+1;
        }
    }
    else{
        m = loop(i+1, -1);
    }
    return m;
}


int main()
{
    cout<<loop(0 ,4);

    return 0;
}
