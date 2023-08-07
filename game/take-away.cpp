#include <iostream>
using namespace std;

/**
 * consider a pile of n coins
 * a player can remove 1, 2, 3 coins
 * find the winner
 */

/**
 * observation
 *
 * coins --- winner
 *   1         1
 *   2         1
 *   3         1
 *   4         2
 *   5         1
 *   6         1
 *   7         1
 *   8         2
 *   9         1
 *   10         1
 */
void solve(int n) {
    if (n % 4 == 0)
        cout << "winnder II\n";
    else
        cout << "winner I\n";
}

int main() {
    for (int i = 1; i < 23; ++i) {
        cout << "for " << i << " coin, ";
        solve(i);
    }

    return 0;
}