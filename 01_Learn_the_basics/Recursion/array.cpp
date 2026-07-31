#include <bits/stdc++.h>
#include <string>
using namespace std;

void reverseArray(vector<int>& arr){
    int p1 = 0;
    int p2 = arr.size() - 1;

    while(p1<p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    }


    

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}