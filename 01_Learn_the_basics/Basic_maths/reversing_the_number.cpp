/*
 * Problem: Reverse a Number (Digits)
 *
 * Problem Statement:
 * Given a signed 32-bit integer N, return the number obtained by reversing its digits.
 * Handle overflow cases appropriately by returning 0 if reversing exceeds standard 32-bit integer ranges.
 *
 * Example 1:
 * Input: N = 7789
 * Output: 9877
 *
 * Example 2:
 * Input: N = -123
 * Output: -321
 *
 * Complexity Analysis:
 * - Time Complexity: O(log10(N)) corresponding to digit extraction steps.
 * - Space Complexity: O(1) constant memory.
 */

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reverse = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }

    return reverse;
}

// Leetcode
class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
            x /= 10;
        }

        return rev;
    }
};


int main() {
    int n = 7789;

    cout << "Reversed Number: " << reverseNumber(n);

    return 0;
}


