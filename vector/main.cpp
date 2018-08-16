#include <vector>
#include <iostream>
using namespace std;
vector <int> c[10];
int main()
{
    c[1].push_back(30);
    c[1].push_back(30);
    cout<<c[1].size();
    return 0;
}
