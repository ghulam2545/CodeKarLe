#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

#if 0
int lengthOfLongestSubstring(string s) {
    int n = s.size();
    if (n <= 1) return n;
    int ans = 0;

    set<char> charSet;
    int left = 0;
    for (int right = 0; right < n; ++right) {
        if (charSet.count(s[right]) == 0) {
            charSet.insert(s[right]);
            ans = max(ans, right - left + 1);
        } else {
            while (charSet.count(s[right])) {
                charSet.erase(s[left]);
                ++left;
            }
        }
    }

    return ans;
}
#endif

int main() {
    return 0;
}