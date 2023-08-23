#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    set<int> ss(nums.begin(), nums.end());

    return ss.size() != nums.size();
}

int main() {
    return 0;
}