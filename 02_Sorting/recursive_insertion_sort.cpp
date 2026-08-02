/*
 * Problem: Recursive Insertion Sort
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of N integers, implement Insertion Sort recursively to sort the array in non-decreasing order.
 * Recursively sort the prefix of length i, then insert the (i+1)-th element into its correct position in the sorted prefix.
 *
 * Example 1:
 * Input: N = 6, arr = [13, 46, 24, 52, 20, 9]
 * Output: [9, 13, 20, 24, 46, 52]
 * Explanation: Elements from left to right are recursively inserted into the sorted subsection.
 *
 * Example 2:
 * Input: N = 4, arr = [4, 3, 2, 1]
 * Output: [1, 2, 3, 4]
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) worst and average cases. O(N) best case when already sorted.
 * - Space Complexity: O(N) auxiliary stack memory due to recursive calls.
 */

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int i, int n){
    if(i==n) return;

    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
    insertion_sort(arr, i+1,n);
}

int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        }
    cout << endl;

    
    insertion_sort(arr, 0, n);

    cout << "After Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}