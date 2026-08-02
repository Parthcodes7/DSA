/*
 * Problem: Pattern 7 - Star Pyramid Pattern
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, print a centered symmetrical star pyramid pattern of N rows with spaces padding left and right.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 *     *    
 *    ***   
 *   *****  
 *  ******* 
 * *********
 *
 * Example 2:
 * Input: N = 3
 * Output:
 *   *  
 *  *** 
 * *****
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) iterations across rows and column spacing/stars.
 * - Space Complexity: O(1) constant space.
 */

#include <bits/stdc++.h>
using namespace std;

void pattern7(int n) {
    // Outer loop for rows
    for (int i = 0; i < n; i++) {

        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
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
    pattern7(5);
    return 0;
}