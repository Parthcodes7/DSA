/*
 * Problem: Print Name N times using Recursion
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Print the given name string N times using recursion without using loops.
 *
 * Example 1:
 * Input: N = 3, Name = "Striver"
 * Output: 
 * Striver
 * Striver
 * Striver
 *
 * Complexity Analysis:
 * - Time Complexity: O(N) for N recursive function invocations.
 * - Space Complexity: O(N) internal recursive call stack space.
 */

#include <iostream>
#include <string>
using namespace std;

void print(string name, int count, int N) {

    if (count == N) {
        return;
    }

    cout << name << endl;

    print(name, count + 1, N);
}

int main() {
    print("Parth", 0, 5);
    return 0;
}