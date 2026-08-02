/*
 * Problem: Check if a Number is Prime
 *
 * Problem Statement:
 * Given an integer N, check whether it is a prime number or not. A prime number is a natural number greater than 1 having exactly two factors: 1 and the number itself.
 *
 * Example 1:
 * Input: N = 5
 * Output: Prime (true)
 * Explanation: 5 has exactly two divisors: 1 and 5.
 *
 * Example 2:
 * Input: N = 10
 * Output: Not Prime (false)
 * Explanation: 10 is divisible by 1, 2, 5, and 10.
 *
 * Approach & Complexity Analysis:
 * - Time Complexity: O(N) checking all numbers up to N (can be optimized to O(sqrt(N))).
 * - Space Complexity: O(1) constant memory usage.
 */

#include <iostream>
using namespace std;

bool isPrime(int n) {

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    return count == 2;
}

int main() {

    int n = 5;

    if (isPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}