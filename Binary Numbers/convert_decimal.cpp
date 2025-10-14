#include<iostream>
using namespace std;
int binNum(int n){
    int ans = 0 , pow = 1;
    while(n > 0){
        int rem = n % 10;
        n = n / 10;
        ans += rem * pow;
        pow = pow * 2;
    }
    return ans;
}
int main(){
    cout << binNum(1100101) << endl;
    return 0;
}