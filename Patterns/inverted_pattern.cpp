#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){ // Loop for the space printing
            cout << " ";
        }
        for(int j = 0; j < n-i; j++){ // Loop for printing the number in the specific amount in the specific row
            cout << i+1;
        }
        cout << endl;
    }
    return 0;
}
                   // space  num
// i = 0 -> 1111        0     4
// i = 1 ->  222        1     3
// i = 1 ->   33        2     2
// i = 1 ->    4        3     1
                 //i spaces  n-i

//i = n (spaces to be printed)
// num -> numer that is to be printed according to the numbers in the row