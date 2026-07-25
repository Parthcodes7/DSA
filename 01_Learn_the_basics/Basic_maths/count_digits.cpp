/*
Problem: Count Digits
Platform: Striver A2Z

Approach:
Repeatedly divide the number by 10 and count the iterations.

Time Complexity: O(log10(n))
Space Complexity: O(1)
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