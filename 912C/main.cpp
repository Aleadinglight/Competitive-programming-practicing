#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
const int N=100010;
struct bang{
    int enemy, health;
    long long time;
};
struct diem{
    long long x,y;
};
int n,m,d, bounty, inc, dame, maxx[N], regen[N];
bang points[2*N];
diem a[2*N];

bool sosanh(const bang &q, const bang &p){
    return ((q.enemy<p.enemy) || ((q.enemy==p.enemy) && (q.time<p.time)));
}

bool sosanh2(const diem &q, const diem &p){
    return ((q.x<p.x) || ((q.x==p.x)&&(q.y>p.y)));
}

void add(long long i, long long j){
    d++;
    a[d].x=i;
    a[d].y=1;
    if (j>=0){
        d++;
        a[d].x=j;
        a[d].y=-1;
    }
}

void debug(){
    for (int i=1; i<=(n+m); i++)
        if (points[i].enemy==0)
            cout<<points[i].time<<" "<<points[i].enemy<<" "<<points[i].health<<endl;
    /*for (int i=1; i<=d; i++)
        cout<<a[i].x<<" "<<a[i].y<<endl;*/
    cout<<"debugMode"<<endl;
}

int main(){
    //freopen("input.inp", "r", stdin);
    scanf("%i %i",&n,&m);
    scanf("%i %i %i",&bounty, &inc, &dame);
    for (int i=1; i<=n; i++){
        points[i].time=0;
        points[i].enemy=i;
        scanf("%i %i %i",&maxx[i], &points[i].health, &regen[i]);
        if (maxx[i]<=dame && inc>0){
            printf("-1");
            return 0;
        }
    }
    for (int i=1; i<=m; i++){
        scanf("%i %i %i", &points[n+i].time, &points[n+i].enemy, &points[n+i].health);
    }

    sort(points+1, points+n+m+1, sosanh);

    int kt=0, base=-1;
    for (int i=1; i<=(n+m); i++){
        if (kt==1 && points[base].enemy!=points[i].enemy){
            if (inc>0){
                printf("-1\n");
                return 0;
            }
            else{
                kt=0;
                base=-1;
                add(points[base].time,-1);
            }
        }
        if (regen[points[i].enemy]==0 && points[i].health<=dame){
            if (base==-1)
                base=i;
            kt=1;
            continue;
        }
        else if (regen[points[i].enemy]==0 && points[i].health>dame){
            if (base!=-1){
                add(points[base].time, points[i].time-1);
                base=-1;
                kt=0;

            }
            continue;
        }
        if (i!=(n+m) && points[i].enemy==points[i+1].enemy){
            long long temp = 1LL*(dame-points[i].health)/regen[points[i].enemy]+ points[i].time;
            if (dame-points[i].health>=0){
                if (temp>=points[i+1].time){
                    add(points[i].time, points[i+1].time-1);
                }
                else{
                    add(points[i].time, temp);
                }
            }
        }
        else{
            long long temp = 1LL*(dame-points[i].health)/regen[points[i].enemy]+ points[i].time;
            if (dame-points[i].health>=0)
                add(points[i].time, temp);
        }
    }
    if (kt==1){
        if (inc>0){
            printf("-1");
            return 0;
        }
        else{
            add(points[base].time,-1);
        }
    }
    //debug();
    sort(a+1,a+1+d, sosanh2);
    int tg=0;
    long long ans=0;

    for (int i=1; i<=d; i++){
        if(a[i].y==1){
            tg++;
            long long temp = 1LL*tg*(bounty+1LL*a[i].x*inc);
            ans=max(temp, ans);
        }
        else{
            long long temp = 1LL*tg*(bounty+1LL*a[i].x*inc);
            ans=max(temp, ans);
            tg--;
        }
    }
    cout<<ans;
    return 0;
}
