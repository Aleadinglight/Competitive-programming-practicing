#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

char bang[200][200],name[4][200];
string st;
int n,m,posX[300],posY[300];

bool chuoi()
{
    for (int i=0;i<=st.length();i++)
    {
        if (st[i] != ' ' || st[i]!='\n' )
            return true;
    }
    return false;
}

void xuli()
{

}

int main()
{   int d=1,l=0;
    freopen("template.in","r",stdin);
    freopen("template.out", "w",stdout);
    scanf("%i %i\n",&m,&n);
    for (int i=0;i<n;i++)
    {
        scanf("%s\n",bang[i]);
        for (int j=0;j<strlen(bang[i]);j++){
            posX[int(bang[i][j])]=j;
            posY[int(bang[i][j])]=i;
        }
    }
    while ( true )
    {
        getline(st);
        if (chuoi())
        {
            if (d==1)
            {
                strcpy(name[l], st);
                l++;
                d=0;
            }
            else
                xuli();
        }
        else
        {
            d=1;
        }
    }
    for (int i=0;i<2;i++)
        printf("%s",name[i]);
    return 0;
}
