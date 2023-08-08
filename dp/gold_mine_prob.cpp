#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int maxGold(int n, int m, vector<vector<int>> mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        for (int j = cols - 2; j >= 0; --j) {
            for (int i = rows - 1; i >= 0; --i) {
                if (i >= 0 && j >= 0 && i < rows && j < cols) {
                }
            }
        }
    }
};

int main() {
    return 0;
}