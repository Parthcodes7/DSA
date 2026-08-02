/*
 * Problem: Find the Second Smallest Element in an Array without sorting
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of integers, find the second smallest element in the array without sorting it.
 * If no second smallest element exists, return INT_MAX.
 *
 * Example 1:
 * Input: n = 6, arr = [1, 2, 4, 7, 7, 5]
 * Output: 2
 * Explanation: The smallest element is 1 and the second smallest element is 2.
 *
 * Example 2:
 * Input: n = 3, arr = [10, 10, 10]
 * Output: No second smallest element exists
 * Explanation: All elements are identical, so a second smallest element does not exist.
 *
 * Complexity Analysis:
 * - Time Complexity: O(N), single pass optimal solution traversing the array once.
 * - Space Complexity: O(1), using constant auxiliary space.
 */

#include <bits/stdc++.h>
using namespace std;

int SecondSmallest(vector<int> &a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] > smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
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

    int ssmallest = SecondSmallest(arr, n);

    if (ssmallest == INT_MAX) {
        cout << "No second smallest element exists" << endl;
    } else {
        cout << "Second Smallest element is: " << ssmallest << endl;
    }

    return 0;
}