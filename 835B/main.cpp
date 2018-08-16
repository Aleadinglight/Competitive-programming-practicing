#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;
char c[100010];
int a[100010], n, k, tg, dif, cnt, inc;

int main()
{
    cin>>k;
    scanf("%s",c);
    for (int i = 0; i<strlen(c); i++){
        a[i] = c[i]-'0';
        tg = tg+a[i];
    }
    n = strlen(c);
    dif = k-tg;
    sort(a, a+n);
    for (int i=0; i<n; i++){
        if (a[i]<9 && inc<dif){
            inc+= 9 -a[i];
            cnt++;
        }
        else
            break;
    }
    cout<<cnt;
    return 0;
}
