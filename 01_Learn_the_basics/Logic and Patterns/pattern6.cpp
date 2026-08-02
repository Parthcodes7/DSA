/*
 * Problem: Pattern 6 - Inverted Numbered Right Pyramid
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given an integer N, print an inverted right-angled numerical pyramid where the first row prints numbers from 1 to N, decreasing in length by 1 each row.
 *
 * Example 1:
 * Input: N = 5
 * Output:
 * 1 2 3 4 5
 * 1 2 3 4
 * 1 2 3
 * 1 2
 * 1
 *
 * Example 2:
 * Input: N = 3
 * Output:
 * 1 2 3
 * 1 2
 * 1
 *
 * Complexity Analysis:
 * - Time Complexity: O(N^2) total iterations.
 * - Space Complexity: O(1) extra auxiliary memory.
 */

#include<bits/stdc++.h>
using namespace std;

void pattern4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = n; j>i; j--){
            cout << n - j + 1 << " ";
        }
        cout<<endl;
    }
}

int main(){
    pattern4(5);
}