/*
 * Problem: Pattern 4 - Right-Angled Number Pyramid II
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, print a right-angled triangle where row i (1-indexed) repeats the number i, exactly i times.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 * 1
 * 2 2
 * 3 3 3
 * 4 4 4 4
 * 5 5 5 5 5
 *
 * Example 2:
 * Input: N = 3
 * Output:
 * 1
 * 2 2
 * 3 3 3
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) iterations.
 * - Space Complexity: O(1) auxiliary space.
 */

#include<bits/stdc++.h>
using namespace std;

void pattern4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<< i << " ";
        }
        cout<<endl;
    }
}

int main(){
    pattern4(5);
}