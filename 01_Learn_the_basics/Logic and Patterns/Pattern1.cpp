/*
 * Problem: Pattern 1 - Rectangular Star Pattern
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, print a rectangular grid consisting of N rows and N columns of stars (*).
 *
 * Example 1:
 * Input: N = 4
 * Output:
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 *
 * Example 2:
 * Input: N = 2
 * Output:
 * * *
 * * *
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) for printing N rows of N stars each.
 * - Space Complexity: O(1) extra space.
 */

#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i< 4; i++){
        for(int j = 0; j < 4; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}