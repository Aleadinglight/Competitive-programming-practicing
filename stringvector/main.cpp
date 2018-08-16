#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <string> c;

int main()
{
    c.push_back("as");
    c.push_back("as");
    for (int i=0; i<c.size(); i++)
        cout<<c[i];
    if (c[0]==c[1])
        cout<<"\nEqual";
    else
        cout<<"\nNotEqual";
    return 0;
}
