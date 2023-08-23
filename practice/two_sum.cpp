#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> ans = {-1, -1};
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) mp[nums[i]] = i;

    for (int i = 0; i < n; ++i) {
        auto ask = target - nums[i];
        auto it = mp.find(ask);

        if (it != mp.end()) {
            auto idx = it->second;
            if (i != idx) {
                ans = {i, idx};
            }
        }
    }

    return ans;
}

int main() {
    return 0;
}