#include <iostream>

using namespace std;
int n,T,k;

void inra(int n){

    for (int i=1;i<=n; i++)
        cout<<"1 ";
}
int bitNot(int n){
    int tg=0, tc=1;
    while (n>0){
        if (n%2==0){
            tg+=tc;
        }
        tc=tc<<1;
        n=n>>1;
    }
    return tg;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for (int i=1;i<=T;i++){
        cin>>n>>k;
        if (n==1){
            cout<<k;
        }
        else if (k==1){
            inra(n);
        }
        else{
            if (n%2==0 && k%2==0){
                cout<<k<<" ";
                cout<<bitNot(k)<<" ";
                inra(n-2);
            }
            else if (n%2==0 && k%2==1){
                k=k-1;
                cout<<k<<" ";
                cout<<bitNot(k)<<" ";
                inra(n-2);
            }
            else if (n%2==1 && k%2==1){
                cout<<k<<" ";
                cout<<bitNot(k)+1<<" ";
                inra(n-2);
            }
            else{
                cout<<k<<" ";
                int tmp = bitNot(k);
                if (tmp == 1){
                    if (k>2){
                        cout<<"2 3";
                        inra(n-3);
                    }
                    else{
                        inra(n-1);
                    }
                }
                else{
                    cout<<bitNot(k)-1<<" ";
                    inra(n-2);
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
