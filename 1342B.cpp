#include <bits/stdc++.h>

using ll=long long;
using namespace std;

int main() {
    ll k=0,i=0,f=0,j=0;
    string s="",c="",d="";
    cin >> k;
    while(k--){
        f=0;
        cin >> s;
        for (i=1;i<s.length();i++){
            if (s[i]!=s[0])
                f++;
        }
        if (f==0)
            cout << s+s << endl;
        else {
            if (s[0]=='0')
                c="0",d="1";
            else
                c="1",d="0";
            for (j=0;j<s.length();j++){
                cout << (c + d);
            }
            cout << endl;
        }
    }
    return 0;
}
