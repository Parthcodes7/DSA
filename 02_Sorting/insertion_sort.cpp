/*
 * Problem: Insertion Sort
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of N integers, perform Insertion Sort to sort the array in ascending order.
 * Insertion sort builds the sorted array one item at a time by inserting each new element into its correct position among the already sorted elements.
 *
 * Example 1:
 * Input: N = 5, arr = [13, 46, 24, 52, 20]
 * Output: [13, 20, 24, 46, 52]
 * Explanation: Elements are progressively inserted into their correct positions in the sorted subsection.
 *
 * Example 2:
 * Input: N = 4, arr = [8, 4, 1, 5]
 * Output: [1, 4, 5, 8]
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) in the worst and average cases. O(N) best case when the array is already sorted.
 * - Space Complexity: O(1), entirely in-place modification.
 */

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    for(int i = 0;i<=n-1; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
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

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}