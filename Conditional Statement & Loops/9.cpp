#include<iostream>
using namespace std;
int main(){
    while(3 > 5){
        cout << "Hello World" << endl;
    }
    do{ // Runs at least once even if the condition is false
        cout << "Hello World" << endl;
    } while(3 > 5);
    return 0;
}