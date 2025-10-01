#include<iostream>
using namespace std;
int SumOFDigits(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n = n/10;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter a value : ";
    cin >> n;
    cout << "Sum of digits of n is : " << SumOFDigits(n) << endl;
    return 0;
}