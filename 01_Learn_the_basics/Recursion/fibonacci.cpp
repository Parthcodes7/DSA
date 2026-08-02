/*
 * Problem: Print Nth Fibonacci Number / Fibonacci Series using Recursion
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, compute the Nth Fibonacci number using recursion. In a Fibonacci sequence, each number is the sum of the two preceding ones (0, 1, 1, 2, 3, 5, 8...).
 *
 * Example 1:
 * Input: N = 5
 * Output: 5
 * Explanation: The 5th index in the 0-indexed Fibonacci series is 5.
 *
 * Example 2:
 * Input: N = 6
 * Output: 8
 *
 * Complexity Analysis:
 * - Time Complexity: O(2^N) exponential time complexity due to overlapping subproblems in naive recursion.
 * - Space Complexity: O(N) auxiliary maximum recursion tree depth.
 */

#include <bits/stdc++.h>
#include <string>
using namespace std;

int fibonacci(int N) {
    
    if (N <= 1) {
        return N;
    }

    
    int last = fibonacci(N - 1);   
    int slast = fibonacci(N - 2);  

    return last + slast;
}

int main(){
    int N = 4;
    cout << fibonacci(N) << endl; 
    return 0;
}