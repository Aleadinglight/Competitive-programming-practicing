#include <stdio.h>

using namespace std;

struct bang{
    int x,y;
};

bang a[200010];

bool sosanh(const bang &q, const bang &p){
    return ((q.x<p.x) || (q.x==p.x && q.y<p.y))
}

int timd(int s, int t){
    int l=1,r=n,mid;

    while (l<=r){
        mid=(l+r)/2;
        if (a[mid].x<=s){
            if (mid<=n && a[mid+1].x<=s)
                mid++;
            else
                break;
        }
        else
            r=mid-1;
    }
    return -1;
}

int main()
{
    freopen("input.inp","r",stdin);
    scanf("%i %i %i",&n,&k,&q);

    for (int i=1;i<=n;i++){
        scanf("%i %i",&a[i].x,&a[i].y);
    }
    sort(a+1,a+n+1,sosanh);

    for (int i=1;i<=q;i++){
        scanf("%i %i",&s,&t);
        d=timd(s,t);
        c=timc
    }
    return 0;
}
