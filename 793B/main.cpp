#include <stdio.h>

using namespace std;

struct bang{
    int x,y;
};

bang L[2][1010],t[1010][1010];

int n,m,d[1010][1010],a[1010][1010],u,v,u1,v1;

void init(){
    for (int i=0;i<=n+1;i++){
        a[i][0]=1;
        a[i][m+1]=1;
    }
    for (int j=0;j<=m+1;j++){
        a[0][j]=1;
        a[n+1][j]=1;
    }
}

void them(int p, int q, int l)
{
    int w[4]={-1,1,0,0};
    int r[4]={0,0,1,-1}, h=1-l, z;
    for (int i=0;i<4;i++){
        if (a[p+w[i]][q+r[i]]!=1 && d[p+w[i]][q+r[i]]==0){
            L[h][0].x++;
            z=L[h][0].x;
            L[h][z].x=p+w[i];
            L[h][z].y=q+r[i];
            d[p+w[i]][q+r[i]]=1;
            t[p+w[i]][q+r[i]].x=p;
            t[p+w[i]][q+r[i]].y=q;
        }
        if (a[p+w[i]][q+r[i]]==2)
        {
            u=p+w[i];
            v=q+r[i];
        }
    }

}

void xuli()
{
    int l=0;
    init();
    while (L[l][0].x>0){
        for (int i=1;i<=L[l][0].x;i++)
            them(L[l][i].x,L[l][i].y,l);
        L[l][0].x=0;
        l=1-l;
    }
}

void inra()
{
    int p,q,s,f,turn=0;
    if (u==0 && v==0)
    {
        printf("NO");
        return;
    }
    p=t[u][v].x;
    q=t[u][v].y;
    s=t[p][q].x;
    f=t[p][q].y;
    if (p!=u1 && q!=v1)
    while ((s!=u1 || f!=v1) && (p!=u1 || q!=v1)){
        if (((p-s)*(u-p)+ (q-f)*(v-q))==0)
            turn++;
        u=p;
        v=q;
        p=s;
        q=f;
        s=t[p][q].x;
        f=t[p][q].y;
    }
    if (turn<=2)
        printf("YES");
    else
        printf("NO");
}

int main()
{
    char c;
    //freopen("input.inp","r",stdin);
    scanf("%i %i\n",&n,&m);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            scanf("%c",&c);
            if (c=='S'){
                L[0][0].x=1;
                L[0][1].x=i;
                L[0][1].y=j;
                d[i][j]=1;
                u1=i;
                v1=j;
            }
            if (c=='T')
                a[i][j]=2;
            if (c=='.')
                a[i][j]=0;
            if (c=='*')
                a[i][j]=1;
        }
        scanf("\n");
    }
    xuli();
    inra();
    return 0;
}
