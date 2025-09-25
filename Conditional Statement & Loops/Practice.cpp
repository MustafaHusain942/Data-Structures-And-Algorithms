// Q1) Sum of numbers from 1 to n (for loop)
// #include<iostream>
// using namespace std;
// int main(){
//     int n , sum = 0;
//     cout << "Enter a number : ";
//     cin >> n;
//     for (int i = 1 ; i <= n ; i++){
//         sum += i;
//     }
//     cout << "Sum of first n numbers from 1 = " << sum << endl;
//     return 0;
// }


// Q1) Sum of numbers from 1 to n (while loop)

// #include<iostream>
// using namespace std;
// int main(){
//     int n , sum = 0;
//     cout << "Enter  a number : ";
//     cin >> n;
//     int i = 1;
//     while (i <= n){
//         sum += i;
//         i++;
//     }
//     cout << "Sum of first n numbers from 1 = " << sum << endl;
//     return 0;
// }

// Q2) Sum of all odd numbers from 1 to n
// #include<iostream>
// using namespace std;
// int main(){
//     int n , sum = 0;
//     cout << "Enter a number : ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i = i + 2){
//         sum += i;
//     }
//     cout << "Sum of all odd numbers = " << sum <<  endl;
//     return 0;
// }

// Q3) Check if a number is prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "Enter a number : ";
//     cin >> num;
//     bool isPrime = true;
//     if(num == 1){
//         cout << "Neither prime nor composite " << endl;
//     }
//     for(int i = 2 ; i * i < num ; i++){
//         if(num % i == 0){
//             isPrime = false;
//             break;
//         }   
//     }
//     if(isPrime == true){
//         cout << "Number is prime" << endl;
//     }
//     else cout << "Number is not prime" << endl;
//     return 0;
// }

// Q4) Sum of all numbers from 1 to N which are divisible by 3
#include<iostream>
using namespace std;
int main(){
    int n , sum = 0;
    cout << "Enter the number : ";
    cin >> n;
    for(int  i = 1 ; i <= n ; i++){
        if( i % 3 == 0){
            sum += i;
        }
    }
    cout << "Sum of all numbers from 1 to N which are divisible by 3 = " << sum << endl;
    return 0;
}