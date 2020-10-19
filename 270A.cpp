#include <iostream>

using ll=long long;
using namespace std;

int main() {
    ll t=0,i=0,a=0,f=0;
    cin >> t;
    while(t--){
        cin >> a;
        f=0;
        for (i=3;i<=360;i++){
            if (360%i==0 && (180==a+(360/i))) {
                f++;
            }
        }
        if (f>0)
            cout << "YES" << endl;
        else
        {
            cout << "NO"<< endl;
        }
        
    }
    return 0;
}