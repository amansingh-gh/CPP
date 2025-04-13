#include <iostream>
#include <vector>
using namespace std;

int lastOcc(vector<int> arr, int target){
    int st = 0, end = arr.size() - 1, mid = st + (end - st) / 2;
    int index = -1;
    while (st <= end){
        if (arr[mid] == target){
            index = mid; // store index
            // left search
            st = mid + 1;
        }
        else if (target > arr[mid]){
            // right search
            st = mid + 1;
        }   
        else if (target < arr[mid]){
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return index;
}

    int main(){
        vector<int> v{1, 3, 4, 4, 4, 4,4, 4, 6, 7};
        int target = 4;
        int ans = lastOcc(v, target);
        cout << "Last occurence at index: "<< ans << endl;
        return 0;
    }