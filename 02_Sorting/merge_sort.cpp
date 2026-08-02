/*
 * Problem: Merge Sort
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of integers, sort the array using the Merge Sort algorithm (Divide and Conquer).
 * Continuously divide the array in half until base cases of size 1 are reached, then merge the sorted halves back together.
 *
 * Example 1:
 * Input: N = 5, arr = [5, 2, 8, 4, 1]
 * Output: [1, 2, 4, 5, 8]
 * Explanation: The array is recursively divided into halves and merged in ascending order.
 *
 * Example 2:
 * Input: N = 6, arr = [12, 11, 13, 5, 6, 7]
 * Output: [5, 6, 7, 11, 12, 13]
 *
 * Complexity Analysis:
 * - Time Complexity: O(N * log N) across all cases (best, average, worst) due to logarithmic divisions and linear merging.
 * - Space Complexity: O(N) auxiliary space required for the temporary merging array.
 */

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid,int high){
    vector<int> temp;
    int left =  low;
    int right = mid + 1;
    while(left <=mid && right <=  high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low ;i<=high;i++){
        arr[i] = temp[i - low];
    }

}


void ms(vector<int> & arr, int low, int high){
     if(low==high) return;
     int mid = (low+high)/2;
     ms(arr,low,mid);
     ms(arr,mid + 1,high);
     merge(arr,low,mid,high);
}
void mergesort(vector<int> & arr, int n){
     ms(arr,0,n-1);
}

int main() {
    vector<int> arr = {5, 2, 8, 4, 1};
    mergesort(arr, arr.size());
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}