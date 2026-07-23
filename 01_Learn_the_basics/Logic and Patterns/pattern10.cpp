#include <bits/stdc++.h>
using namespace std;
// Method 1
void pattern10(int n){
    for(int i = 0; i<=2*n - i;i++){
        int stars = i;
        if(i > n)stars  = 2*n - i;
        for(int j = 1; j<=stars;j++){
            cout<< "*";
        }
        cout<<endl;

    }
}


// Method 2
// void pattern7(int n) {
//     for (int i = 0; i < n; i++) {

//         // Print stars
//         for (int j = 0; j < i + 1; j++) {
//             cout << "*";
//         }

//         // Print trailing spaces
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         cout << endl;
//     }

// }
// void pattern8(int n) {
//     // Outer loop for rows
//     for (int i = 0; i < n; i++) {


//         // Print stars
//         for (int j = 0; j < (n) - (i + 1); j++) {
//             cout << "*";
//         }

//         // Print trailing spaces
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         cout << endl;
//     }
// }

// void pattern10(){
//     pattern7(5);
//     pattern8(5);
// }

int main() {
    pattern10(5);
    return 0;
}