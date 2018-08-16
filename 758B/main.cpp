#include <iostream>
#include <string>
using namespace std;
string st;
char a[5]="!!!!";
int d=0,b[10];


int main()
{
    cin>>st;
    if (st.size()%4 != 0 )
    {
        string st1="";
        int k=4- st.size()%4;
        for (int i=1;i<=k;i++)
            st1+='?';
        st+=st1;
    }

    for (int i=0;i<st.size();i=i+4)
    {
        for (int j=i;j<=i+3;j++)
        {
            if (st[j]!='!' && a[j%4]=='!'){
                a[j%4]=st[j];
                d++;
            }
        }
        if (d==4)
            break;
    }
    for (int i=0;i<st.size();i++)
    {
        if (st[i]=='!')
        {
            if (a[i%4]=='R')
                b[1]++;
            if (a[i%4]=='B')
                b[2]++;
            if (a[i%4]=='Y')
                b[3]++;
            if (a[i%4]=='G')
                b[4]++;
        }
    }
    for (int i=1;i<=4;i++)
        cout<<b[i]<<" ";
    return 0;
}
