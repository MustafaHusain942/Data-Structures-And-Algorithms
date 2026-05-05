// Firstly breakdown the pattern from middle in upper and lower
// Upper part - Boundary of the pyramid .The first line has spaces and then one star . Like this every rwo has two stars and spaces in between them

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){ // Printing the inverted spaces
            cout << " ";
        }
        cout << "*"; // Printing diagonal *
        if(i != 0){          // Printing remaining stars and also as in the first line there is only star and all other lines have two stars we use if condition.
            for(int j = 0; j < 2*i-1; j++){ // Printing pyramid spaces
                cout << " ";
            }
            cout << "*";
        }
        
        cout << endl;
    }
    // Lower part - Firstly we have the normal triangle of spaces and the we have a diagonal of star. Then we have a pyramid of spaces and then we the other diagonal for which the range can be reffered in the for loop code
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < i+1; j++){ // Printing the spaces before the diagonal star
            cout << " ";
        }
        cout << "*"; // Printing diagonal of star
        if(i != n-2){
            for(int j = 0; j < 2*(2-i)-1; j++){ // Printing the pyramid of spaces in between the diagonal of stars
                cout << " ";
            }
            cout << "*"; // Printing the other diagonal of star
        }
        cout << endl;
    }
    return 0;
}