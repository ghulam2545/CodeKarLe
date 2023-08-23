#include <iostream>
using namespace std;
using ull = unsigned long long int;

ull fact(ull n) {
    return n <= 1 ? 1 : n * fact(n - 1);
}

int main() {
    cout << fact(5) << '\n'
         << fact(16) << '\n';

    return 0;
}