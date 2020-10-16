#include <iostream>
#include <cmath>
#include <algorithm>

using ll=long long;
using namespace std;

int main() {
    ll n=0,i=0,a=0;
    cin >> n;
    ll s[n];
    ll b[4];
    for (i=0;i<4;i++){
        b[i]=0;
    }
    for (i=0;i<n;i++){
        s[i]=0;
    }
    for (i=0;i<n;i++){
        cin >> s[i];
        if (s[i]==1){
            b[0]++;
        } else if (s[i]==2){
            b[1]++;
        } else if (s[i]==3){
            b[2]++;
        } else {
            b[3]++;
        }
    }
    if (b[0]-b[2]>0){
        b[0] = b[0] - b[2];
    } else {
        b[0]=0;
    }
    if (b[1]%2==1 && b[0]>0){
        if (b[0]>1){
            b[0] -=2;
        } else {
            b[0]--;
        }
    }
    a = b[3] + b[2] + b[0]/4 + b[1]/2 + b[1]%2;
    if (b[0] % 4 != 0){
        a++;
    }
    cout << a;
    return 0;
}