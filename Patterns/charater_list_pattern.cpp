#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of elemnets in each row : ";
    cin >> m;
    char k = 'A';
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << k;
            k++;
        }
        cout << endl;
    }
    return 0;
}