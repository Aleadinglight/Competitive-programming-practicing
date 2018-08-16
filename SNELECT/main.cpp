#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
char c[300];
int t,s,m;
int main()
{
    //freopen("input.inp","r",stdin);
    scanf("%i\n",&t);
    for (int k=1;k<=t;k++)
    {
        scanf("%s\n",c);
        for (int i=0;i<strlen(c);i++)
        {
            if (i==0){
                if (c[i+1]=='s' && c[i]=='m')
                {
                    c[i+1]='*';
                    c[i]='q';
                }
            }
            else if (i==strlen(c)-1){
                if (c[i-1]=='s' && c[i]=='m')
                {
                    c[i-1]='*';
                    c[i]='q';
                }
            }
            else{
                if (c[i-1]=='s' && c[i]=='m')
                {
                    c[i]='q';
                    c[i-1]='*';
                }
                else if (c[i+1]=='s' && c[i]=='m')
                {
                    c[i+1]='*';
                    c[i]='q';
                }
            }
        }
        s=0;
        m=0;
        for (int i=0;i<=strlen(c);i++)
            if (c[i]=='s')
                s++;
            else if (c[i]=='m' || c[i]=='q')
                m++;
        if (m>s)
            printf("mongooses\n");
        else if (m<s)
            printf("snakes\n");
        else
            printf("tie\n");
    }
    return 0;
}
