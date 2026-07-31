/*
Problem: Reverse a Number
Platform: Striver A2Z

Time Complexity: O(log10(n))
Space Complexity: O(1)
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


