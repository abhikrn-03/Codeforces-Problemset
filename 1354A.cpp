#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long long int t,i,a,b,c,d,o,times;
  cin >> t;
  for (i=0;i<t;i++){
    a=b=c=d=o=0;
    cin >> a >> b >> c >> d;
    if (b>=a){
      o=b;
    }
    else if (d>=c){
      o=-1;
    }
    else {
      times = ceil((double)(a-b)/((double)(c-d)));
      o = b + times*c;
    }
    cout << o << endl;
  }
  return 0;
}
