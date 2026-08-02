/*
 * Problem: Remove Duplicates from a Sorted Array
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given a sorted integer array, remove the duplicates in-place such that each unique element appears only once.
 * The relative order of the elements should be kept the same. Return the length of the newly formatted array.
 *
 * Example 1:
 * Input: n = 7, arr = [1, 1, 2, 2, 2, 3, 3]
 * Output: New length = 3, Array = [1, 2, 3, ...]
 * Explanation: Only 3 unique elements exist in the array (1, 2, and 3).
 *
 * Example 2:
 * Input: n = 5, arr = [1, 1, 1, 2, 2]
 * Output: New length = 2, Array = [1, 2, ...]
 * Explanation: Only 2 unique elements exist in the array (1 and 2).
 *
 * Complexity Analysis:
 * - Time Complexity: O(N), single pass using the two-pointer technique.
 * - Space Complexity: O(1), entirely in-place modification without extra memory.
 */

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &a, int n) {
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (a[j] != a[i]) {
            i++;
            a[i] = a[j];
        }
    }

    return i + 1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newLength = removeDuplicates(arr, n);

    cout << "New length of array is: " << newLength << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}