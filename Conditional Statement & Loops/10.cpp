// Nested Loops
#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout << "Enter the number of lines : ";
    cin >> n;
    cout << "Enter the nunber of '*' in each line : ";
    cin >> m;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cout << "*";
        }
        cout << endl;
    }
}