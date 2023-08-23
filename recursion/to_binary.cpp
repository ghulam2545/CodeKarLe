#include <iostream>
using namespace std;

void binary(int n) {
    if (n) {
        auto rem = n % 2;
        binary(n / 2);
        cout << rem;
    }
}

int main() {
    binary(5);
    cout << '\n';
    binary(12);

    return 0;
}