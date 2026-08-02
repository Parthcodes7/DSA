#include <bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int> &a, int n) {
    int Largest = a[0];
    int sLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] > Largest) {
            sLargest = Largest;
            Largest = a[i];
        } else if (a[i] < Largest && a[i] > sLargest) {
            sLargest = a[i];
        }
    }
    return sLargest;
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

    int slargest = SecondLargest(arr, n);

    if (slargest == INT_MIN) {
        cout << "No second largest element exists" << endl;
    } else {
        cout << "Second Largest element is: " << slargest << endl;
    }

    return 0;
}