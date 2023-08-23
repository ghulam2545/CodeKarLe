#include <iostream>
using namespace std;
using ull = unsigned long long int;

int sum(int num) {
    if (num < 0)
        return 0;
    else
        return num + sum(num - 1);
}

int main() {
    cout << sum(6) << '\n';
    cout << sum(15) << '\n';
    return 0;
}