/*
 * Problem: Check if a String is a Palindrome using Recursion
 *
 * Problem Statement:
 * Given a string, check whether it is a palindrome or not using recursion. A string is a palindrome if it reads the same backwards as forwards.
 *
 * Example 1:
 * Input: "ABCDCBA"
 * Output: Palindrome (true)
 *
 * Example 2:
 * Input: "TAKEUFORWARD"
 * Output: Not Palindrome (false)
 *
 * Complexity Analysis:
 * - Time Complexity: O(N/2) ~ O(N) as character comparisons take place across half the length.
 * - Space Complexity: O(N/2) ~ O(N) recursion call stack memory.
 */

#include <bits/stdc++.h>
#include <string>
using namespace std;

bool palindrome(int i, string& s){
        if(i >= s.length() /2){
            return true;
        }
        if(s[i] != s[s.length() - i - 1]){
            return false;
        }
        return palindrome(i + 1, s);
    }



int main() {
    string  s = "nitin";
    cout << palindrome(0, s); 
    cout << endl;

    return 0;
}