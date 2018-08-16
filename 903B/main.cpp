#include <iostream>
#include <stdio.h>
using namespace std;
int t[10000];
int main()
{
    int a,b,c,x,y;
    cin>>a>>b>>c;
    cin>>x>>y;
    int i=0;
    while (x>0){
        if (a-y<=0 && x-b>0){
            a+=c;
            t[i]=1;

        }
        else{
            x=x-b;
        }
        a=a-y;
        i++;
    }
    printf("%i\n",i);
    for (int j=0; j<i; j++)
        if (t[j]==0){
            printf("STRIKE\n");
        }
        else
            printf("HEAL\n");
    return 0;
}
