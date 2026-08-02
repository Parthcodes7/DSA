/*
 * Problem: Pattern 10 - Half Diamond Star Pattern
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, print a half diamond star pattern where row lengths grow from 1 to N stars and then shrink back down to 1.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) iterations across 2*N-1 rows.
 * - Space Complexity: O(1) constant memory usage.
 */

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