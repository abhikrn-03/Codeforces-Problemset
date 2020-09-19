#include <iostream>

using namespace std;

int main() {
  int n,m,i,j,s1=0;
  cin >> m >> n;
  char arr[n][m];
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      cin >> arr[i][j];
    }
  }
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      if (arr[i][j]=='C'||arr[i][j]=='Y'||arr[i][j]=='M'){
        s1++;
        break;
      }
    }
  }
  if (s1==0){
    cout << "#Black&White";
  }
  else {
    cout << "#Color";
  }
}
