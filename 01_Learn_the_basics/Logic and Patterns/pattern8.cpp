/*
 * Problem: Pattern 8 - Inverted Star Pyramid Pattern
 *
 * Problem Statement:
 * Given an integer N, print an inverted centered star pyramid of N rows where stars taper from 2*N-1 down to 1 star.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 * *********
 *  ******* 
 *   *****  
 *    ***   
 *     *    
 *
 * Example 2:
 * Input: N = 3
 * Output:
 * *****
 *  *** 
 *   *  
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) iterations.
 * - Space Complexity: O(1) constant extra space.
 */

#include <bits/stdc++.h>
using namespace std;

void pattern8(int n) {
    // Outer loop for rows
    for (int i = 0; i < n; i++) {

        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < (2*n) - (2*i + 1); j++) {
            cout << "*";
        }

        // Print trailing spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

int main() {
    pattern8(5);
    return 0;
}