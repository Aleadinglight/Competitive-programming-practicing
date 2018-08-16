#include <stdio.h>
#include <algorithm>

using namespace std;
int n,m,ans;
struct bang{
    int x,y,z;
};

bang a[200010];

bool sosanh(const bang &p, const bang &q){
    return ((p.x<q.x) || (p.x==q.x && p.y<q.y));
}

int tim(int k){
    int l=k+1,r=n,mid,temp=a[k].y-a[k].x+1;
    while (l<=r){
        mid=(l+r)/2;
        if (a[mid].)
    }
    return -1;
}

int main()
{
    //freopen("input.inp","r",stdin);
    scanf("%i %i",&n,&m);
    for (int i=1;i<=n;i++)
        scanf("%i %i %i",&a[i].x,&a[i].y,&a[i].z);
    ans=2*(1e9)+1;
    sort(a+1,a+1+n,sosanh);
    for (int i=1;i<n;i++){
        int c=tim(i);
        if (c!=-1)
            ans=min(ans, a[i].z+a[c].z);
    }
    if (ans!=2*(1e9)+1)
        printf("%i",ans);
    else
        printf("-1");

    return 0;
}
