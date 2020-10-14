#include <iostream>
using ll=long long;

using namespace std;

int main() {
    ll i=0,j=0,x=0,n=0,o=0;
    cin >> n >>x;
    for(i=1;i<=n;i++){
        if (x%i==0 && (x/i)<=n){
            o++;
        }
    }
    cout << o;
    return 0;
}

