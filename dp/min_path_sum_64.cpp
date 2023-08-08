#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (i == 0 && j == 0) {
                    // just pass it
                } else if (i == 0) {
                    grid[i][j] += grid[i][j - 1];
                } else if (j == 0) {
                    grid[i][j] += grid[i - 1][j];
                } else {
                    grid[i][j] += min(grid[i][j - 1], grid[i - 1][j]);
                }
            }
        }

        return grid[r - 1][c - 1];
    }
};

int main() {
    return 0;
}