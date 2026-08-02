/*
 * Problem: Quick Sort
 *
 * Problem Statement:
 * Given an array of integers, sort the array using the Quick Sort algorithm.
 * Select a pivot element, partition the remaining elements into those less than and those greater than the pivot, and recursively sort the partitions.
 *
 * Example 1:
 * Input: N = 5, arr = [4, 6, 2, 5, 7]
 * Output: [2, 4, 5, 6, 7]
 * Explanation: Elements are partitioned around pivot elements until the whole array is sorted.
 *
 * Example 2:
 * Input: N = 6, arr = [10, 7, 8, 9, 1, 5]
 * Output: [1, 5, 7, 8, 9, 10]
 *
 * Complexity Analysis:
 * - Time Complexity: O(N * log N) average and best case. O(N^2) in the worst case (e.g., already sorted array with poor pivot choices).
 * - Space Complexity: O(1) extra space, though recursion call stack takes O(log N) auxiliary space.
 */

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1)
            i++;

        while (arr[j] > pivot && j >= low + 1)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    qs(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}