#include <iostream>

using namespace std;

int main() {
  int t,a1,a2,b1,b2,i,f;
  cin >> t;
  for(i=0;i<t;i++){
    a1=a2=b1=b2=f=0;
    cin >> a1 >> b1 >> a2 >> b2;
    if (((a1+a2)==b1&&b1==b2)||((b1+b2)==a1&&a1==a2)||((a1+b2)==b1&&b1==a2)||((b1+a2)==a1&&a1==b2)){
      f++;
    }
    if (f==1){
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}
