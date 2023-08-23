#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int rob(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) {
            return arr[0];
        } else if (n == 2) {
            return max(arr[0], arr[1]);
        } else {
            vector<int> copied(n, 0);
            copy(arr.begin(), arr.end(), copied.begin());

            int maxx = arr[0];
            for (int i = 2; i < n - 1; ++i) {
                arr[i] += maxx;
                maxx = max(arr[i - 1], maxx);
            }

            int smaxx = arr[1];
            for (int i = 3; i < n; ++i) {
                copied[i] += smaxx;
                smaxx = max(copied[i - 1], smaxx);
            }

            return max(*max_element(arr.begin(), arr.end()), *max_element(copied.begin(), copied.end()));
        }
    }
};

int main() {
}