/*
 * Problem: Factorial of a Number using Recursion
 *
 * Problem Statement:
 * Given a positive integer N, compute its factorial using recursion.
 * Factorial of N (written as N!) is the product of all positive integers less than or equal to N.
 *
 * Example 1:
 * Input: N = 5
 * Output: 120
 * Explanation: 5! = 5 * 4 * 3 * 2 * 1 = 120
 *
 * Example 2:
 * Input: N = 3
 * Output: 6
 *
 * Complexity Analysis:
 * - Time Complexity: O(N) for N recursive multiplications.
 * - Space Complexity: O(N) auxiliary stack memory.
 */

#include <iostream>
#include <string>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main() {
    cout<<factorial(5);
    return 0;
}