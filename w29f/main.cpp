#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
double sum;
int a[40][40],kt=0;

int c(int i)
{
    return i+12;
}

double cong(int q, int w)
{
    return 1.*sqrt(q*q+w*w);
}

double abss(double z)
{
    if (z<0)
        return -1.*z;
    else
        return z;
}

bool check(double sum)
{
    int ans= (int) sum;
    double k=abss(sum-ans);
    if (k<=0.000000000001)
        return true;
    else
        return false;
}

void inra()
{
    for (int i=-12;i<12;i++)
        for (int j=-12;j<=12;j++)
            if (a[c(i)][c(j)]==1)
                printf("%i %i\n",i,j);
}

void tim(int i, double sum)
{
    if (kt==1)
        return;
    printf("%i",i);
    if (i>3){
        if (check(sum)==true){
            inra();
            kt=1;
        }
        printf("\n");
    }
    else{
        for (int j=0;j<1;j++)
            for (int k=1;k<4;k++){
                if (a[c(j)][c(k)]==0 && j!=k)
                {
                    a[c(j)][c(k)]=1;
                    sum=sum+cong(j,k);
                    tim(i+1,sum);
                    a[c(j)][c(k)]=0;
                }
                if (kt==1)
                    return;
            }
    }
}

int main()
{
    int k,l;
    double sum;
    scanf("%i %i",&k,&l);
    a[c(k)][c(l)]=1;
    sum = sum + cong(k,l);
    tim(1,sum);
    printf("%.15lf",sum);
    return 0;
}
