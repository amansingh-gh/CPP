#include<iostream>
using namespace std;

bool checkPrime (int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;

   for(int i=2; i<=n; i++){
     bool printPrimes = checkPrime(i);
     if(printPrimes){
         cout << i << " ";
     }
   }


    return 0;
}