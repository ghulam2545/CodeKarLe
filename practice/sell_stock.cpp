#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int ans = 0;
    if (n == 1) return ans;

    int buy = prices[0];
    for (int i = 1; i < n; ++i) {
        auto sell = prices[i];
        if (sell > buy) {
            ans = max(ans, sell - buy);
        }
        buy = min(buy, sell);
    }

    return ans;
}

int main() {
    return 0;
}