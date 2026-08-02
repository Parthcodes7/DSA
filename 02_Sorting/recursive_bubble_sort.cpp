/*
 * Problem: Recursive Bubble Sort
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of N integers, implement Bubble Sort recursively to sort the array in ascending order.
 * In each recursive call, perform a pass of adjacent comparisons to push the largest element to the end, then recur for the remaining prefix of length N-1.
 *
 * Example 1:
 * Input: N = 6, arr = [13, 46, 24, 52, 20, 9]
 * Output: [9, 13, 20, 24, 46, 52]
 * Explanation: Recursive bubbling places the largest remaining element at the end in each step.
 *
 * Example 2:
 * Input: N = 3, arr = [5, 1, 3]
 * Output: [1, 3, 5]
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) worst and average case due to N recursive steps each requiring up to N comparisons.
 * - Space Complexity: O(N) auxiliary call stack space for recursive function invocations.
 */

#include <bits/stdc++.h>
using namespace std;

// Recursive function to perform Bubble Sort
void bubble_sort(int arr[], int n) {
    // Base Case: If the array size is 1, it's already sorted
    if (n == 1) return;

    // Perform one pass of Bubble Sort: push the largest element to the end
    for (int j = 0; j <= n - 2; j++) {
        // Swap if elements are in the wrong order
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    // Recur for the remaining unsorted part (one less than before)
    bubble_sort(arr, n - 1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call the recursive Bubble Sort function
    bubble_sort(arr, n);

    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}