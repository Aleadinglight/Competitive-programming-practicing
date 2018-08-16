#include <bits/stdc++.h>

using namespace std;
string st("0");

char duplication(int x){
    int t=st.length();
    while (x>=t){
        string k=st;
        for (int i=0;i<k.length();i++)
            if (k[i]=='0')
               k[i]='1';
            else
                k[i]='0';
        st=st+k;
        t=st.length();
    }

    return st[x];
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        cin >> x;
        char result = duplication(x);
        cout << result << endl;
    }
    return 0;
}
