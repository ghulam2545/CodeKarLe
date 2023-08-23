#include <iostream>
using namespace std;
using ull = unsigned long long int;

ull power(ull a, ull x) {
    if (x == 0)
        return 1;
    else if (x == 1)
        return a;
    else {
        auto mid = power(a, x / 2);
        if (x & 1)
            return a * mid * mid;
        else
            return mid * mid;
    }
}

int main() {
    cout << power(2, 3) << '\n';
    cout << power(4, 3) << '\n';

    return 0;
}