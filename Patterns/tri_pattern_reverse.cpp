#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j > 0 ; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
// For running the code backwards the initial and the final states will be swapped 
//and in the inner loop the value will be decreamented by one 
