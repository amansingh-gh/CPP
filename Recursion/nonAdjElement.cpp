#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;

void solve(vector<int>&arr, int i, int sum , int& maxi){
    if(i>=arr.size()){
        maxi = max(sum,maxi);
        return;
    }
    // inclusive
    solve(arr,i+2,sum+arr[i], maxi);
    // exclusive
    solve(arr,i+1,sum, maxi);

}

int main(){
    vector<int>arr{1,2,3,1,3,5,8,1,9};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(arr,i,sum,maxi);
    cout << maxi <<endl;

    return 0;
}