#include <iostream>
#include <cmath>
using ll=long long;

using namespace std;

int main() {
    ll x=0,y=0,a=0,b=0,t=0,s=0;
    cin >> t;
    while(t--){
        cin >> x >> y >> a >> b;
        s=0;
        if (a*2>b){
            s += abs(x-y)*a;
            s += min(x,y)*b;
        } else {
            s += (x+y)*a;
        }
        cout << s << endl;
    }
    return 0;
}