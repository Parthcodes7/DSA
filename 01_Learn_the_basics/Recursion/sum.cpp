/*
 * Problem: Sum of First N Natural Numbers using Recursion
 *
 * Problem Statement:
 * Given a number N, calculate the sum of the first N natural numbers using recursion (1 + 2 + ... + N).
 *
 * Example 1:
 * Input: N = 5
 * Output: 15
 * Explanation: 1 + 2 + 3 + 4 + 5 = 15
 *
 * Example 2:
 * Input: N = 6
 * Output: 21
 *
 * Complexity Analysis:
 * - Time Complexity: O(N) due to N recursive steps.
 * - Space Complexity: O(N) auxiliary call stack depth.
 */

#include <iostream>
#include <string>
using namespace std;

int sum(int n) {
    if(n == 0){
        return 0;
    }
    return  n + sum(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout<<"Sum is: "<< sum(n);
    return 0;
}