#include <iostream>
#include <vector>
using namespace std;

// TLE
int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int ans = INT32_MIN;

    for (int i = 0; i < n; ++i) {
        int local_prod = 1;
        for (int j = i; j < n; ++j) {
            local_prod *= nums[j];
            ans = max(ans, local_prod);
        }
    }

    return ans;
}

int main() {
    return 0;
}