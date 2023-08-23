#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    if (n == 2) {
        swap(nums[0], nums[1]);
        return nums;
    }

    vector<int> left_arr(nums.begin(), nums.end());
    for (int i = 1; i < n; ++i)
        left_arr[i] *= left_arr[i - 1];

    vector<int> right_arr(nums.begin(), nums.end());
    for (int i = n - 2; i >= 0; --i)
        right_arr[i] *= right_arr[i + 1];

    vector<int> ans(n, 0);
    for (int i = 1; i <= n - 2; ++i) {
        ans[i] = (left_arr[i - 1] * right_arr[i + 1]);
    }
    ans[0] = right_arr[1];
    ans[n - 1] = left_arr[n - 2];
    return ans;
}

int main() {
    return 0;
}