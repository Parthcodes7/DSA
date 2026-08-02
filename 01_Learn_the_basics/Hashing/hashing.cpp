/*
 * Problem: Count Frequency of Array Elements (Integer Hashing)
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an array of integers, count the frequency of given queries using array hashing / hash map.
 *
 * Example 1:
 * Input: Array = [1, 3, 2, 1, 3], Queries = [1, 4, 2, 3]
 * Output: 
 * Frequency of 1 -> 2
 * Frequency of 4 -> 0
 * Frequency of 2 -> 1
 * Frequency of 3 -> 2
 *
 * Complexity Analysis:
 * - Time Complexity: O(N) for preprocessing (building hash table/array), O(1) per query lookup.
 * - Space Complexity: O(N) or O(Max_Value) for the hash table storage.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int hash[13] = {0};
    for(int i = 0; i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number];
    }
}