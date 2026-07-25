/*
Problem: Check Prime Number
Platform: Striver A2Z

Brute Force Approach

Time Complexity: O(n)
Space Complexity: O(1)
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