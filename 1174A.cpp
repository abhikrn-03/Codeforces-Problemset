#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main(){
    ll n=0,i=0,s1=0,s2=0;
    cin >> n;
    ll a[2*n];
    while(i<(2*n)){
        cin >> a[i];
        i++;
    }
    sort (a, a+2*n);
    for (i=0;i<2*n;i++){
        if (i<n){
            s1+=a[i];
        } else {
            s2+=a[i];
        }
    }
    if (s1==s2){
        cout << "-1";
    }
    else {
        for (i=0;i<2*n;i++){
            cout << a[i] << " ";
        }
    }
    return 0;
}