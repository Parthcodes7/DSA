/*
 * Problem: Pattern 2 - Right-Angled Triangle Pattern
 *
 * Problem Statement:
 * Given an integer N, print a right-angled triangle consisting of N rows of stars (*), where the i-th row has i stars.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 * * 
 * * * 
 * * * * 
 * * * * * 
 * * * * * * 
 *
 * Example 2:
 * Input: N = 3
 * Output:
 * * 
 * * * 
 * * * * 
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) total printed characters across rows.
 * - Space Complexity: O(1) constant space.
 */

#include<iostream>
using namespace std;

void pattern2(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    pattern2(5);
}