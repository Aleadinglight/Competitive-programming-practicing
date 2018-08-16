#include <stdio.h>
#include <algorithm>
#include <stack>

using namespace std;
int n, ans,add,top,curr;
char c;
stack<int> a;
int main()
{
    //freopen("input.inp","r",stdin);
    scanf("%i\n",&n);
    curr=1;
    for (int i=1;i<=2*n;i++)
    {
        scanf("%c",&c);
        if (c=='a'){
            scanf("dd %i\n",&add);
            a.push(add);
        }
        else{
            scanf("emove\n");
            if (!a.empty()){
                if (a.top()==curr)
                    a.pop();
                else{
                    while (!a.empty())
                        a.pop();
                    ans++;
                }
            }
            curr++;
        }
    }
    printf("%i",ans);
    return 0;
}
