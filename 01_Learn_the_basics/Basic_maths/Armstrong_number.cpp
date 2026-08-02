/*
 * Problem: Check Armstrong Number
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, check whether it is an Armstrong number or not.
 * An Armstrong number is a number that is equal to the sum of cubes of its digits (for 3-digit numbers).
 *
 * Example 1:
 * Input: N = 371
 * Output: Armstrong Number (true)
 * Explanation: 3^3 + 7^3 + 1^3 = 27 + 343 + 1 = 371.
 *
 * Example 2:
 * Input: N = 123
 * Output: Not Armstrong (false)
 * Explanation: 1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36 != 123.
 *
 * Complexity Analysis:
 * - Time Complexity: O(log10(N)) as we extract digits individually.
 * - Space Complexity: O(1) constant space.
 */

#include <iostream>
using namespace std;

bool isArmstrong(int n) {

    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return sum == original;
}

int main() {

    int n = 371;

    if (isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0;
}