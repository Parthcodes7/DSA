/*
Problem: Print All Divisors
Platform: Striver A2Z

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printDivisors(int n) {

    cout << "Divisors: ";

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }
}

int main() {

    int n = 36;

    printDivisors(n);

    return 0;
}