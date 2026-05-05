// Number pattern
#include<iostream>
using namespace std;
int main(){
    int n = 3 , num = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=n ; j++){
            cout << " " << num;
            num++;
        }
        cout << endl;
    }
    cout << "After pattern number value : " << num;
    return 0;
}

// Character pattern
#include<iostream>
using namespace std;
int main(){
    int n = 3;
    char ch = 'A';
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << " " << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}