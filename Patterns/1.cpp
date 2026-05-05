#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout << "Enter the number of rows in the pattern: ";
    cin >> n;
    cout << "Enter the number of elements in each row: ";
    cin >> m;
    for(int i = 1 ; i <= n ; i++){ // outer loop for number of lines
        char ch = 'A';
        for(int j = 1 ; j <= m ; j++){ // inner loop for elements in each row
            cout << " " << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}