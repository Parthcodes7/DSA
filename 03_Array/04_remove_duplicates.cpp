#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &a, int n) {
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (a[j] != a[i]) {
            i++;
            a[i] = a[j];
        }
    }

    return i + 1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newLength = removeDuplicates(arr, n);

    cout << "New length of array is: " << newLength << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}