/*
 * Problem: Selection Sort
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of N integers, perform Selection Sort to arrange the elements in ascending order.
 * In each iteration, find the minimum element from the unsorted subarray and place it at the beginning of the unsorted section.
 *
 * Example 1:
 * Input: N = 5, arr = [13, 46, 24, 52, 20]
 * Output: [13, 20, 24, 46, 52]
 * Explanation: In each pass, the smallest remaining element is selected and swapped with the current index.
 *
 * Example 2:
 * Input: N = 4, arr = [9, 7, 5, 3]
 * Output: [3, 5, 7, 9]
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) best, average, and worst cases as scanning for the minimum takes N comparisons regardless of order.
 * - Space Complexity: O(1) in-place algorithm requiring constant extra memory.
 */

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mini = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
} 

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}