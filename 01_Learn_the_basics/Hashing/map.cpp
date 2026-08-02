/*
 * Problem: Count Element Frequencies using STL Map / Unordered Map
 *
 * Problem Statement:
 * Given an array of integers or words, calculate the frequency of each element using C++ STL `std::map` or `std::unordered_map`.
 *
 * Example 1:
 * Input: arr = [10, 5, 10, 15, 10, 5]
 * Output: 
 * 5 -> 2 times
 * 10 -> 3 times
 * 15 -> 1 time
 *
 * Complexity Analysis:
 * - Time Complexity: O(N * log N) when inserting N elements into std::map, or O(N) average case with std::unordered_map.
 * - Space Complexity: O(K) where K is the number of unique elements stored in the map.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int, int>mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

    }
    return 0;
}