/*
Problem: Find GCD
Platform: Striver A2Z

Approach:
Brute Force

Time Complexity: O(min(n1,n2))
Space Complexity: O(1)
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