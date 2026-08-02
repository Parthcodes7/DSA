/*
 * Problem: Reverse an Array using Recursion
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of integers, reverse the elements of the array in-place using recursion (two-pointer recursive approach).
 *
 * Example 1:
 * Input: N = 5, arr = [5, 4, 3, 2, 1]
 * Output: [1, 2, 3, 4, 5]
 *
 * Example 2:
 * Input: N = 4, arr = [10, 20, 30, 40]
 * Output: [40, 30, 20, 10]
 *
 * Complexity Analysis:
 * - Time Complexity: O(N/2) ~ O(N) as we perform swaps for half the array length.
 * - Space Complexity: O(N/2) ~ O(N) auxiliary recursion stack space.
 */

#include <bits/stdc++.h>
#include <string>
using namespace std;

void reverseArray(vector<int>& arr){
    int p1 = 0;
    int p2 = arr.size() - 1;

    while(p1<p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    }


    

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}