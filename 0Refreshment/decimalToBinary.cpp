#include<iostream>
#include<math.h>
using namespace std;
int decToBinConv(int n){
    int binaryNo = 0;
    int i=0;
    while(n>0){
        int bit = n%2;
        binaryNo = bit*pow(10,i++)+binaryNo;
        cout << bit << " ";
        n = n/2;
    }
    return binaryNo;
}
int main(){
    int n = 10;
    int binary = decToBinConv(n);
    cout << "Deciaml to Binary converion is: "<< binary << endl;
    return 0;
}