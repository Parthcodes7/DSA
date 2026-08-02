/*
 * Problem: Print All Divisors of a Number
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, print all of its divisors in ascending order.
 *
 * Example 1:
 * Input: N = 36
 * Output: 1 2 3 4 6 9 12 18 36
 * Explanation: All these numbers divide 36 completely without remainder.
 *
 * Example 2:
 * Input: N = 15
 * Output: 1 3 5 15
 *
 * Complexity Analysis:
 * - Time Complexity: O(N) traversing from 1 to N (can be optimized to O(sqrt(N))).
 * - Space Complexity: O(1) constant space used.
 */

#include <iostream>
using namespace std;

void printDivisors(int n) {

    cout << "Divisors: ";

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }
}

int main() {

    int n = 36;

    printDivisors(n);

    return 0;
}