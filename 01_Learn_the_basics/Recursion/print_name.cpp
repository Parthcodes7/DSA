#include <iostream>
#include <string>
using namespace std;

void print(string name, int count, int N) {

    if (count == N) {
        return;
    }

    cout << name << endl;

    print(name, count + 1, N);
}

int main() {
    print("Parth", 0, 5);
    return 0;
}