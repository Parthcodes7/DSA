/*
 * Problem: Check Palindrome Number
 *
 * Problem Statement:
 * Given an integer N, return true if N is a palindrome number and false otherwise.
 * An integer is a palindrome when it reads the same backward as forward.
 *
 * Example 1:
 * Input: N = 8778
 * Output: Palindrome (true)
 * Explanation: 8778 reads from right to left as 8778.
 *
 * Example 2:
 * Input: N = 123
 * Output: Not Palindrome (false)
 * Explanation: From right to left it becomes 321, which is not equal to 123.
 *
 * Complexity Analysis:
 * - Time Complexity: O(log10(N)) corresponding to the number of digits in N.
 * - Space Complexity: O(1) extra auxiliary space.
 */

#include <iostream>
using namespace std;

bool isPalindrome(int n) {

    int original = n;
    int reverse = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }

    return original == reverse;
}

int main() {

    int n = 8778;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}