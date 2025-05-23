#include<iostream>
#include<vector>
using namespace std;

void sortAll(vector<int>&arr){
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    cout << "Sorted Array : " << endl;
    for(auto val : arr){
        cout << val << " ";
    } 
    cout << endl;
        
}

int main(){
    vector<int>arr{0,1,1,1,2,1,0,1,2};

    sortAll(arr);

    
    return 0;
}