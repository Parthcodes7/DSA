/*
 * Problem: Find the Second Largest Element in an Array without sorting
 *
 * Problem Statement:
 * Given an array of integers, find the second largest element in the array without sorting it.
 * If no second largest element exists, return INT_MIN.
 *
 * Example 1:
 * Input: n = 6, arr = [1, 2, 4, 7, 7, 5]
 * Output: 5
 * Explanation: The largest element is 7 and the second largest element is 5.
 *
 * Example 2:
 * Input: n = 3, arr = [10, 10, 10]
 * Output: No second largest element exists
 * Explanation: All elements are identical, so a second largest element does not exist.
 *
 * Complexity Analysis:
 * - Time Complexity: O(N), single pass optimal solution traversing the array once.
 * - Space Complexity: O(1), using constant auxiliary space.
 */

#include <bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int> &a, int n) {
    int Largest = a[0];
    int sLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] > Largest) {
            sLargest = Largest;
            Largest = a[i];
        } else if (a[i] < Largest && a[i] > sLargest) {
            sLargest = a[i];
        }
    }
    return sLargest;
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

    int slargest = SecondLargest(arr, n);

    if (slargest == INT_MIN) {
        cout << "No second largest element exists" << endl;
    } else {
        cout << "Second Largest element is: " << slargest << endl;
    }

    return 0;
}