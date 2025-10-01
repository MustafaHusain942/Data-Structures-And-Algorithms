#include<iostream>
using namespace std;

int sum(int a , int b){
    return a + b;
}

int mini(int a , int b){ // Parameters of a function - Values that are used in the function to perform operation
    if(a < b) return a;
    else return b;
}

int main(){
    int a = 10;
    int b = 17;
    cout << mini(a , b) << endl;  // Arguments - The actual values given to the parameters of the function to perform the operation on the argument
    int s = sum(a , b);
    cout << "Sum of " << a << " & " << b << " is : " << s << endl;
    return 0;
}