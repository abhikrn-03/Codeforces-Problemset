#include <iostream>

using namespace std;

int main() {
  int n,i,se=0,so=0,j,s=0;
  cin >> n;
  for (i=0;i<n;i++){
    s=se=so=0;
    cin >> s;
    int arr[s];
    for (j=0;j<s;j++){
      cin >> arr[j];
    }
    for (j=0;j<s;j++){
      if ((j%2==0) && (arr[j]%2==1)){
        se++;
      }
      if ((j%2==1) && (arr[j]%2==0)){
        so++;
      }
    }
    if (so==0 && se==0){
      cout << 0 << endl;
    }
    else if (so==se){
      cout << se << endl;
    }
    else {
      cout << -1 << endl;
    }
  }
}
