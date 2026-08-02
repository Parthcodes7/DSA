/*
 * Problem: Find the Largest Element in an Array
 *
 * Problem Statement:
 * Given an array of integers, find the largest element in the array.
 *
 * Example 1:
 * Input: n = 5, arr = [2, 5, 1, 3, 0]
 * Output: 5
 * Explanation: 5 is the largest element in the array.
 *
 * Example 2:
 * Input: n = 5, arr = [8, 10, 5, 7, 9]
 * Output: 10
 * Explanation: 10 is the largest element in the array.
 *
 * Complexity Analysis:
 * - Time Complexity: O(N), where N is the number of elements in the array. We perform a single linear traverse.
 * - Space Complexity: O(1), as no auxiliary space is used.
 */

#include <bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &arr, int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = largest_element(arr, n);

    cout << "Largest element is: " << largest << endl;

    return 0;
}