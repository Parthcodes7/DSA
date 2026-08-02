/*
 * Problem: Pattern 5 - Inverted Right-Angled Triangle Pattern
 *
 * Problem Statement:
 * Given an integer N, print an inverted right-angled triangle of stars (*), where row 1 has N stars and row N has 1 star.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 * Example 2:
 * Input: N = 3
 * Output:
 * * * *
 * * *
 * *
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) nested loop iterations.
 * - Space Complexity: O(1) extra space.
 */

#include<iostream>
using namespace std;

void pattern5(int n){
    for(int i  = 0; i<n; i++){
        for(int j = n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    pattern5(5);
}