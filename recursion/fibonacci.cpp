#include <iostream>
using namespace std;
using ull = unsigned long long int;

ull fib(ull n) {
    return n <= 1 ? n : fib(n - 1) + fib(n - 2);
}

int main() {
    cout << "count : vals\n";
    for (int i = 0; i <= 6; ++i) {
        cout << i << '\t' << fib(i) << '\n';
    }
    cout << 32 << '\t' << fib(32) << '\n';
    return 0;
}