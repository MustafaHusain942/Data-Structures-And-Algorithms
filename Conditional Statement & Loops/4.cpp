#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a  character : C";
    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        cout << "Lowercase character" << endl;
    } else if(ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase character" << endl;
    }
    return 0;
}