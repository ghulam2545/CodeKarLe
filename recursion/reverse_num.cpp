#include <iostream>
using namespace std;
using ull = unsigned long long int;

void reverse_num(ull num) {
    if (num) {
        cout << num % 10;
        reverse_num(num / 10);
    }
}

int main() {
    reverse_num(1534);

    return 0;
}