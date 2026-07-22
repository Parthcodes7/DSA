/*

        TIME & SPACE COMPLEXITY EXAMPLES

*/

// Example 1: O(1) Time | O(1) Space
// Accessing an element in an array

#include <iostream>
#include <vector>
using namespace std;

void constantTime() {
    int arr[] = {10, 20, 30, 40, 50};

    cout << arr[2] << endl;

    // Time Complexity : O(1)
    // Space Complexity: O(1)
}

//----------------------------------------------------

// Example 2: O(n) Time | O(1) Space
// Single Loop

void linearTime(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }

    // Time Complexity : O(n)
    // Space Complexity: O(1)
}

//----------------------------------------------------

// Example 3: O(n²) Time | O(1) Space
// Nested Loops

void quadraticTime(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Time Complexity : O(n²)
    // Space Complexity: O(1)
}

//----------------------------------------------------

// Example 4: O(log n) Time | O(1) Space
// Divide by 2 every iteration

void logarithmicTime(int n) {
    while (n > 1) {
        cout << n << " ";
        n /= 2;
    }

    // Time Complexity : O(log n)
    // Space Complexity: O(1)
}

//----------------------------------------------------

// Example 5: O(n log n) Time
// Outer loop runs n times
// Inner loop runs log n times

void nLognTime(int n) {
    for (int i = 0; i < n; i++) {

        int x = n;

        while (x > 1) {
            x /= 2;
        }
    }

    // Time Complexity : O(n log n)
    // Space Complexity: O(1)
}

//----------------------------------------------------

// Example 6: O(n) Time | O(n) Space
// Extra vector

void linearSpace(int n) {

    vector<int> temp(n);

    for (int i = 0; i < n; i++)
        temp[i] = i;

    // Time Complexity : O(n)
    // Space Complexity: O(n)
}

//----------------------------------------------------

// Example 7: O(n + m)
// Two independent loops

void differentVariables(int n, int m) {

    for (int i = 0; i < n; i++) {
    }

    for (int j = 0; j < m; j++) {
    }

    // Time Complexity : O(n + m)
}

//----------------------------------------------------

// Example 8: O(n × m)
// Nested loops with different variables

void differentNestedVariables(int n, int m) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

        }
    }

    // Time Complexity : O(n × m)
}

//----------------------------------------------------

int main() {

    constantTime();

    linearTime(5);

    quadraticTime(3);

    logarithmicTime(16);

    nLognTime(8);

    linearSpace(5);

    differentVariables(5, 3);

    differentNestedVariables(5, 3);

    return 0;
}
