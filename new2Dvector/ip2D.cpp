#include<iostream>
using namespace std;

void rowWiseAccess(int arr[][3]){
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cin >> arr[i][j];
    }
  }

  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  int arr[2][3];
  rowWiseAccess(arr);
  return 0;
}