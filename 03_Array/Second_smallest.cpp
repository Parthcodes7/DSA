#include <bits/stdc++.h>
using namespace std;

int SecondSmallest(vector<int> &a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] > smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ssmallest = SecondSmallest(arr, n);

    if (ssmallest == INT_MAX) {
        cout << "No second smallest element exists" << endl;
    } else {
        cout << "Second Smallest element is: " << ssmallest << endl;
    }

    return 0;
}