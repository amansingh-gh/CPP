#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9,10,11,12,13};
    if(binary_search(arr.begin(), arr.end(), 90)){
        cout << "Found";
    }
    else {
        cout << "Not found";
    }
    return 0;
}