#include <bitset>
#include <iostream>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;
    for (int i = 0; i < 32; ++i) {
        ans <<= 1;
        if (n & 1) ans ^= 1;
        n >>= 1;
    }
    return ans;
}

int main() {
    return 0;
}