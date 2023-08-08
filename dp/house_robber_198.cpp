#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#if 0
// solution 1
class Solution {
   public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return nums[0];
        } else if (n == 2) {
            return max(nums[0], nums[1]);
        } else {
            for (int i = 2; i < n; ++i) {
                int maxx = 0;
                for (int j = i - 2; j >= 0; --j) {
                    maxx = max(nums[j], maxx);
                    nums[i] += maxx;
                }
            }

            return *max_element(nums.begin(), nums.end());
        }
    }
};
#endif

class Solution {
   public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return nums[0];
        } else if (n == 2) {
            return max(nums[0], nums[1]);
        } else {
            int maxx = nums[0];
            for (int i = 2; i < n; ++i) {
                nums[i] += maxx;
                maxx = max(nums[i - 1], maxx);
            }

            return *max_element(nums.begin(), nums.end());
        }
    }
};

int main() {
    return 0;
}