#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

long long R,x1,x2,y2,y;
double xr,yr,r,AB;

int main()
{
    cin>>R>>x1>>y>>x2>>y2;
    AB = 1.0*sqrt((x1-x2)*(x1-x2)+(y-y2)*(y-y2));
    if (1.0*R < AB){
        cout<<x1<<" "<<y<<" "<<R;
        return 0;
    }
    r = 1.0*(AB+R)/2;
    xr = 1.0*(x1-x2)*r/AB+ x2;
    yr = 1.0*(y-y2)*r/AB+ y2;
    if (x1==x2 && y==y2){
        xr = x1+r;
        yr = y;
    }
   printf("%.9lf %.9lf %.9lf",xr,yr,r);
}
