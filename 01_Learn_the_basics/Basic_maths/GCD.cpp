/*
 * Problem: Find Greatest Common Divisor (GCD / HCF)
 *
 * Problem Statement:
 * Given two integers N1 and N2, find their Greatest Common Divisor (GCD) or Highest Common Factor (HCF).
 *
 * Example 1:
 * Input: N1 = 12, N2 = 18
 * Output: 6
 * Explanation: Divisors of 12 are 1, 2, 3, 4, 6, 12. Divisors of 18 are 1, 2, 3, 6, 9, 18. Greatest common is 6.
 *
 * Example 2:
 * Input: N1 = 20, N2 = 15
 * Output: 5
 *
 * Approach:
 * Iterate from 1 up to min(N1, N2) and find the highest integer that divides both numbers without leaving a remainder.
 * (Note: Optimal approach uses Euclidean Algorithm in O(log(min(N1, N2))) time).
 *
 * Complexity Analysis:
 * - Time Complexity: O(min(N1, N2)) using iterative checking.
 * - Space Complexity: O(1) constant space.
 */

#include <iostream>
using namespace std;

int findGCD(int n1, int n2) {

    int gcd = 1;

    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    return gcd;
}

int main() {

    cout << "GCD = " << findGCD(12, 18);

    return 0;
}