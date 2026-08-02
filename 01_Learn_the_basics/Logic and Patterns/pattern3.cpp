/*
 * Problem: Pattern 3 - Right-Angled Number Pyramid
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, print a right-angled triangular pattern where each row i prints numbers from 1 up to i.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 1 2 3 4 5
 *
 * Example 2:
 * Input: N = 3
 * Output:
 * 1
 * 1 2
 * 1 2 3
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) nested loop iterations.
 * - Space Complexity: O(1) constant auxiliary space.
 */

#include<bits/stdc++.h>
using namespace std;

void pattern3(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<< j << " ";
        }
        cout<<endl;
    }
}

int main(){
    pattern3(5);
}