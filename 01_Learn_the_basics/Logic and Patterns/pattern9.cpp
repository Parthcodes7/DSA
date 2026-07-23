#include <bits/stdc++.h>
using namespace std;

void pattern7(int n) {
    for (int i = 0; i < n; i++) {

        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        // Print trailing spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }

}
void pattern8(int n) {
    // Outer loop for rows
    for (int i = 0; i < n; i++) {

        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < (2*n) - (2*i + 1); j++) {
            cout << "*";
        }

        // Print trailing spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern9(){
    pattern7(5);
    pattern8(5);
}

int main() {
    pattern9();
    return 0;
}