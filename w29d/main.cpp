#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int gt[4]={2,3,5,7},a[20],b[20],ans=0,da,db,luu,can=1;
long long l,r;

long long mulmod(long long a, long long b, long long mod)
{
    long long x = 0,y = a % mod;
    while (b > 0)
    {
        if ((b&1)!=0)
        {
            x = (x+ y)%mod;
        }
        y = (y*2)%mod;
        b=b>>1;
    }
    return x % mod;
}

int modulo(int a,int b,int c){
    long long x=1,y=a;
    while(b > 0){
        if((b&1) != 0){
            x=mulmod(x,y,c);
        }
        y = mulmod(y,y,c);
        b= b>> 1;
    }
    return x%c;
}

bool Miller(long long p,long long iteration)
{
    if (p < 2)
    {
        return false;
    }
    if (p != 2 && p % 2==0)
    {
        return false;
    }
    long long s = p - 1;
    int k=0;
    while ((s&1)==0)
    {
        k++;
        s=s>>1;
    }
    for (long long i = 0; i < iteration; i++)
    {
        long long a = rand() % (p - 1) + 1, temp = s;

        long long mod = modulo(a, temp, p);

        while (temp != p - 1 && mod != 1 && mod != p - 1)
        {
            mod = mulmod(mod, mod, p);
            temp *= 2;
        }
        if (mod != p - 1 && temp % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

void check(int n)
{
    long long m=0;
    for (int i=n;i>=1;i--)
    {
        m=m*10+a[i];
    }
    if (m<=r){
        if (Miller(m, 20)){
            ans++;
        }
    }
    else
        can=0;
}

bool kiemthu()
{
    if (da>db)
        return false;
    if (da>9 && db>9)
    {
        for (int i=10;i<=da;i++)
            if (a[i]!=2 && a[i] != 3 && a[i]!=5 && a[i]!= 7)
                return false;
        for (int i=10;i<=db;i++)
            if (b[i]!=2 && b[i] != 3 && b[i]!=5 && b[i]!= 7)
                return false;
    }
    int i=db,j=db;
    while (i>1 && a[i]==b[j])
    {
        i--;
        j--;
    }
    if (a[i]>b[j])
        return false;
    return true;
}

void giamb(int i)
{
    if (b[i]<=2){
        if (i==db)
        {
            b[i]=0;
            db--;
            luu=i;
            return;
        }
        giamb(i+1);
    }
    else{
        for (int j=3;j>=0;j--)
            if (gt[j]<b[i]){
                b[i]=gt[j];
                luu=i;
                return;
            }
    }

}

void tanga(int i)
{
    if (a[i]>=7){
        if (i==da){
            da++;
            a[da]=2;
            int j;
            for (j=i;j>1;j--)
                a[j]=2;
            a[1]=3;
            return;
        }
        tanga(i+1);
    }
    else{
        for (int j=0;j<4;j++)
            if (gt[j]>a[i]){
                a[i]=gt[j];
                if (i==1 && a[i]==5)
                    a[i]=7;
                for (int t=i-1;t>1;t--)
                    a[t]=2;
                if (i>1)
                    a[1]=3;
                break;
            }
    }
}

void next()
{
    int da1=da;
    for (int i=da1;i>=1;i--)
        if (a[i]!=2 && a[i] != 3 && a[i]!=5 && a[i]!= 7)
        {
            tanga(i);
            break;
        }

}


void dem()
{
    int l1=l,r1=r;
    while (l1>0)
    {
        da++;
        a[da]=l1%10;
        l1/=10;
    }
    while (r1>0)
    {
        db++;
        b[db]=r1%10;
        r1/=10;
    }
    if (kiemthu()==false)
        return;
    //---------------------------
    int db1=db;
    for (int i=db1;i>=1;i--)
        if (b[i]!=2 && b[i] != 3 && b[i]!=5 && b[i]!= 7)
        {
            giamb(i);
            break;
        }
    for (int i=luu-1;i>=1;i--)
        b[i]=7;
    next();
}

int main()
{
    cin>>l>>r;
    if (r<10)
    {
        for (int i=0;i<4;i++)
            if (gt[i]>=l && gt[i]<=r)
                ans++;
        cout<<ans;
        return 0;
    }
    if (l<10)
    {
        for (int i=0;i<4;i++)
            if (gt[i]>=l && gt[i]<=r)
                ans++;
        l=10;
    }
    dem();
    if (kiemthu()==true){
        while (can==1){
            check(da);
            a[1]++;
            next();
        }
    }
    cout<<ans;
    cout<<endl;
    for (int i=db;i<=1;i--)
        cout<<b[i];
    return 0;
}
