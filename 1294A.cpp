#include <iostream>

using namespace std;

int main() {
  int i,m,j,n;
  int arr[4];
  cin >> n;
  for (i=0;i<n;i++) {
    for (j=0;j<4;j++) {
      cin >> arr[j];
    }
    m = arr[0]>arr[1]? (arr[0]>arr[2]?arr[0]:arr[2]):(arr[1]>arr[2]?arr[1]:arr[2]);
    if ((arr[3]+arr[0]+arr[1]+arr[2]-3*m)>-1){
      if ((arr[3]+(arr[0]+arr[1]+arr[2])-3*m)%3==0){
        cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
