#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int x = 828327337;
    int ans = 0;
    if(x <= INT_MIN) return 0;
    while(x>0){
        if(ans >= INT_MAX) return 0;
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x / 10;
    }   
    cout << ans;
    return 0;
}