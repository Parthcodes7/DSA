/*
Problem: Check Palindrome Number
Platform: Striver A2Z

Time Complexity: O(log10(n))
Space Complexity: O(1)
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