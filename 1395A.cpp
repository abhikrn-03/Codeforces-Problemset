#include <iostream>

using namespace std;

int main() {
  int t,r,w,g,b,i;
  cin >> t;
  for (i=0;i<t;i++){
    r=w=g=b=0;
    cin >> r >> g >> b >> w;
    if ((r%2==0&&b%2==0&&g%2==0)||(r%2==1&&b%2==1&&g%2==1)){
      cout << "Yes" << endl;
    }
    else if ((r%2==0&&b%2==0&&w%2==0)||(r%2==1&&b%2==1&&w%2==1&&g!=0)){
      cout << "Yes" << endl;
    }
    else if ((g%2==0&&b%2==0&&w%2==0)||(g%2==1&&b%2==1&&w%2==1&&r!=0)){
      cout << "Yes" << endl;
    }
    else if ((r%2==0&&w%2==0&&g%2==0)||(r%2==1&&w%2==1&&g%2==1&&b!=0)){
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}
