#include <iostream>

using namespace std;
double B[1100];
int mod = 1e9+9;

void calB(){
    B[0]=1;
    double temp = 0.0;
    int tu,mau,res;
    for (int i=1; i<=1000; i++){
        if (i>=3 && i%2==1){
            B[i]=0.0;
            continue;
        }
        temp = 0.0;
        for (int j=0; j<=i-1; j++){
            int ltu = j, lmau = i-j+1;

            if (i-j+1>j){
                ltu = i-j+1;
                lmau = j;
            }

            tu=1;
            for(int c=ltu+1; c<=i+1; c++){
                tu=((tu%mod)*(c%mod))%mod;
            }
            mau=1;
            for (int c=1;c<=lmau;c++){
                mau=((mau%mod)*(c%mod))%mod;
            }
            res = tu/mau;
            temp = temp + 1.0*res*B[j];
        }
        B[i] = -1.0/(i+1)*temp;

    }
    cout<<B[100];
}

long long result(long long n, int k){
    long long res = 0;
    int pwr = 1,tu,mau;
    double temp;
    for(int i=k; i>=0; i--){
        int ltu = i, lmau = k-i+1;
        if (k-i+1>i){
            ltu = k-i+1;
            lmau = i;
        }
        tu=1;
        for(int c=ltu+1; c<=k+1; c++){
            tu=((tu%mod)*(c%mod))%mod;
        }
        mau=1;
        for (int c=1;c<=lmau;c++){
            mau=((mau%mod)*(c%mod))%mod;
        }
        int t1=tu/mau;
        pwr = ((pwr%mod)*(n%mod))%mod;


        if (B[i]>0){
            temp = 1.0*t1*B[i];
            res = (res + (long long)temp%mod) %mod;
        }
        else{
            temp = -1.0*t1*B[i]*pwr;
            res = (res - (long long)temp%mod)%mod;
        }
    }
    res = res/(k+1) -1;
    return res;
}

int main()
{
    int T;
    cin>>T;
    long long n;
    int k;
    calB();
    while(T--){
        cin>>n>>k;
        if (n<3)
            cout<<"0"<<endl;
        else
            cout<<result(n,k)<<endl;
    }
    return 0;
}
