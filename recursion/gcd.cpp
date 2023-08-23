#include <iostream>
using namespace std;
using ull = unsigned long long int;

ull gcd(ull a, ull b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    cout << gcd(13, 9) << '\n';
    cout << gcd(12, 28) << '\n';

    return 0;
}