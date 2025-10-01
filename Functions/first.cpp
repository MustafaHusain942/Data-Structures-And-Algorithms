#include<iostream>
using namespace std;
int printHello(){
    cout << "Hello" << '\n';
    return 3;
}
int main(){
    int val = printHello(); // function invoking or calling
    cout << "Value is : " << val << endl;
    return 0;
}