#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int ans = INT32_MIN;
    int temp = 0;
    for (auto& e : nums) {
        temp += e;
        ans = max(ans, temp);
        if (temp < 0) temp = 0;
    }

    return ans;
}

int main() {
    return 0;
}