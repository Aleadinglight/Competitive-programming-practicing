
#include <iostream>
#include <stdio.h>

using namespace std;

int n,q,c;
int cnt[11][101][101];
void input()
{
    int x,y,s,t,z,w, ans, temp, tg;
    //freopen("input.inp", "r", stdin);
    scanf("%i %i %i",&n,&q,&c);
    for (int i=1;i<=n;i++){
        scanf("%i %i %i",&x,&y,&s);
        cnt[s][x][y]++;
    }
    for (int s=0; s<=10; s++)
        for (int i=1;i<=100;i++){
            for (int j=1; j<=100; j++){
                cnt[s][i][j]+=cnt[s][i-1][j]+cnt[s][i][j-1]-cnt[s][i-1][j-1];
            }
        }
    c++;
    for (int i=1; i<=q; i++){
        scanf("%i %i %i %i %i",&t,&z,&w,&x,&y);
        temp = 0;
        tg = 0;
        ans=0;
        for (int j=0; j<=10;j++){
            tg= (cnt[j][x][y]-cnt[j][z-1][y]-cnt[j][x][w-1]+cnt[j][z-1][w-1]);
            temp = (t+j)%c;
            ans+=tg*temp;
        }

        printf("%i\n",ans);
    }

}

int main()
{
    input();
    return 0;
}
