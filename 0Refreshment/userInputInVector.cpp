#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}   