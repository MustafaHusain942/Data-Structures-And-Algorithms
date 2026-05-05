#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
            }
        for(int j = 1; j <= i+1; j++){
            cout << j;
            }
        for(int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
        }
        return 0;
    }

// In this we divide the pyramid into two parts so that we can print individual pattern to make the problem easy 
// and also we need three loops for doing so 
// First is for printing spaces
// Second for printing first triangle
// Third for second triangle
