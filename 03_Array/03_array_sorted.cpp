/*
 * Problem: Check if an Array is Sorted
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of size n, write a program to check if the given array is sorted in ascending order or not.
 * If the array is sorted, output "Sorted"; otherwise output "Not Sorted".
 *
 * Example 1:
 * Input: n = 5, arr = [1, 2, 3, 4, 5]
 * Output: Sorted
 * Explanation: All elements of the array are in non-decreasing order.
 *
 * Example 2:
 * Input: n = 5, arr = [5, 4, 6, 7, 8]
 * Output: Not Sorted
 * Explanation: arr[1] (4) is smaller than arr[0] (5), breaking the ascending order.
 *
 * Complexity Analysis:
 * - Time Complexity: O(N), where N is the length of the array. In the worst case, we check all consecutive pairs once.
 * - Space Complexity: O(1), using constant auxiliary space.
 */

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int n, vector<int> &a) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool sorted = isSorted(n, a);
    cout << (sorted ? "Sorted" : "Not Sorted") << endl;

    return 0;
}