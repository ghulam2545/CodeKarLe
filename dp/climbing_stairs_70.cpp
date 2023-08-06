#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int solve(int n, vector<int>& dp) {
        for (int i = 3; i <= n; ++i) dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(1e5, 0);
        dp[1] = 1;
        dp[2] = 2;
        if (n <= 2) return dp[n];

        return solve(n, dp);
    }
};

int main() {
    return 0;
}