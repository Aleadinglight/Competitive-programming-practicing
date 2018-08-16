#include <stdio.h>
#include <algorithm>
#include <limits.h>
#include <queue>
using namespace std;
priority_queue <int> q;
long long a=LLONG_MAX,b=LLONG_MAX-1;
int n;


int main()
{
    int k;
    scanf("%i",&n);
    for (int i=1;i<=n;i++){
        scanf("%i",&k);
        q.push(k);
    }
    while (q.size()>0){
        printf("%i\n",q.top());
        q.pop();
    }
    return 0;
}
