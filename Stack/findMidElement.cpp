#include<iostream>
#include<stack>
using namespace std;

void getMiddle(stack<int>&s, int totalSize){
    if(s.size() == (totalSize/2)+1){
        cout << "Middle element is: " << s.top();
        return;
    }

    int temp = s.top();
    s.pop();

    getMiddle(s,totalSize);

    s.push(temp);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    int totalSize = s.size();
    getMiddle(s,totalSize);

    return 0;
}