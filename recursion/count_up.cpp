#include <iostream>
using namespace std;

void count_up(int n) {
    if (n < 0) return;
    count_up(n - 1);
    cout << n << ' ';
}

int main() {
    count_up(13);

    return 0;
}