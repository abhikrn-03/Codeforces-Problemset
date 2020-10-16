#include <iostream>
#include <vector>
#include <string>

using ll=long long;
using namespace std;

int main() {
    ll t=0,n=0,a=0,i=0,so=0;
    string s="";
    cin >> t;
    while(t--){
        cin >> n >> s;
        a=i=so=0;
        vector<char> v(s.begin(), s.end());
        for (i=0;i<n;i++){
            if(v[i]=='('){
                so++;
            } else {
                so--;
            }
            if (so<0){
                so=0;
                a++;
            }
        }
        cout << a << endl;
    }
    return 0;
}