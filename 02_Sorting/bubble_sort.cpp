/*
 * Problem: Bubble Sort
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of N integers, write a program to perform Bubble Sort on the array in ascending order.
 * Bubble Sort compares adjacent elements and swaps them if they are out of order, repeatedly pushing the largest element to the end.
 *
 * Example 1:
 * Input: N = 5, arr = [13, 46, 24, 52, 20]
 * Output: [13, 20, 24, 46, 52]
 * Explanation: After performing bubble sort, the elements are sorted in non-decreasing order.
 *
 * Example 2:
 * Input: N = 6, arr = [5, 4, 3, 2, 1, 0]
 * Output: [0, 1, 2, 3, 4, 5]
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) worst and average case. O(N) best case (if the array is already sorted, optimized with an early break).
 * - Space Complexity: O(1), entirely in-place sorting without auxiliary memory.
 */

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = n - 1; i >= 1; i--) {
        int did_swap = 0;

        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                did_swap = 1;
            }
        }

        if (did_swap == 0) {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}