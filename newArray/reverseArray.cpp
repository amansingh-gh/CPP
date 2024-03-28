#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(auto val : arr){
        cout << "The reversed array is : " << val << endl;
    }

    return 0;
}