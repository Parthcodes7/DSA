/*
 * Problem: Character Hashing (Count Frequency of Characters in a String)
 * Source: Striver's A2Z DSA Course / takeuforward
 *
 * Problem Statement:
 * Given a string and several character queries, find out how many times each queried character appears in the string using frequency arrays (hashing).
 *
 * Example 1:
 * Input: String = "takeuforward", Queries = ['a', 'z', 'k', 'r']
 * Output: 
 * 'a' -> 2
 * 'z' -> 0
 * 'k' -> 1
 * 'r' -> 2
 *
 * Complexity Analysis:
 * - Time Complexity: O(N) where N is string length for preprocessing, O(1) per character query.
 * - Space Complexity: O(256) ~ O(1) fixed size frequency array for ASCII characters.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int hash[26] = {0}; 
    for(int i = 0;i<s.size();i++){
        hash[s[i] = 'a']++;
    }
    int q;
    cin>>q;


    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;

    }
    return 0;
}