/*
 * Problem: Pattern 11 - Binary Number Triangle Pattern
 *
 * Problem Statement:
 * Given an integer N, print a right-angled triangle pattern of alternating 1s and 0s starting with 1 on odd-indexed rows and 0 on even-indexed rows.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 * 1
 * 0 1
 * 1 0 1
 * 0 1 0 1
 * 1 0 1 0 1
 *
 * Example 2:
 * Input: N = 3
 * Output:
 * 1
 * 0 1
 * 1 0 1
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) iterations across rows and columns.
 * - Space Complexity: O(1) auxiliary memory space.
 */

#include <bits/stdc++.h>
using namespace std;

void pattern11(int n){
    for(int i  = 0;i<n;i++){
        int start = 1;
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j<=i;j++){
            cout<< start;
            start = 1 - start;
        }
        cout<<endl;
    }
}

int main(){
    pattern11(5);
}