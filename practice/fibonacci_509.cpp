#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int solve(int n, vector<int>& dp) {
        for (int i = 2; i <= n; ++i) dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }
    int fib(int n) {
        vector<int> dp(1e6, 0);
        dp[0] = 0;
        dp[1] = 1;
        if (n <= 1) return dp[n];
        return solve(n, dp);
    }
};

int main() {
    return 0;
}