#include <iostream>
#include <vector>
using namespace std;

int count_bit(int n) {
    int c = 0;
    while (n) {
        if (n & 1) ++c;
        n = n >> 1;
    }
    return c;
}

vector<int> countBits(int n) {
    vector<int> ans;
    for (int i = 0; i <= n; ++i) ans.push_back(count_bit(i));

    return ans;
}

int main() {
    return 0;
}