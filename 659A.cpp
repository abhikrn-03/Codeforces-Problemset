#include <iostream>

using namespace std;
using ll=long long;

int main(){
    ll n=0,a=0,b=0,e=0;
    cin >> n >> a >> b;
    e = (a+b)%n;
    if (e<0){
        e = n+e;
    } else if(e==0){
        e=n;
    }
    cout << e;
    return 0;
}