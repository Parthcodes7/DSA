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

int main() {
    int n = 7789;

    cout << "Reversed Number: " << reverseNumber(n);

    return 0;
}