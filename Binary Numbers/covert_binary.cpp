#include<iostream>
using namespace std;
int main(){
    int ans = 0 , i = 1;
    int dec;
    cout << "Enter a number (in decimal) : ";
    cin >> dec;
    int j = dec;
    while(dec > 0){
        int rem = dec % 2;
        dec = dec / 2;
        ans += rem * i;
        i = i * 10;
    }
    cout << "Value of " << j << " in binary is : " << ans << endl;
    return 0;
}