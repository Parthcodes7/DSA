/*
Problem: Armstrong Number
Platform: Striver A2Z

Time Complexity: O(log10(n))
Space Complexity: O(1)
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