/*
 * Problem: Count Digits in a Number
 *
 * Problem Statement:
 * Given an integer N, count the number of digits in N.
 *
 * Example 1:
 * Input: N = 12345
 * Output: 5
 * Explanation: There are 5 digits in 12345.
 *
 * Example 2:
 * Input: N = 7787
 * Output: 4
 * Explanation: There are 4 digits in 7787.
 *
 * Approach:
 * Repeatedly divide the number by 10 and count the iterations until N becomes 0.
 *
 * Complexity Analysis:
 * - Time Complexity: O(log10(N)) since division by 10 takes logarithmic steps.
 * - Space Complexity: O(1) constant memory.
 */

#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;

    while (n > 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {
    int n = 7787;

    cout << "Number of Digits: " << countDigits(n);

    return 0;
}