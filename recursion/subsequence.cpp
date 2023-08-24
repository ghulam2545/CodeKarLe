#include <iostream>
#include <vector>
using namespace std;

void string_wala(const int& idx, const string& str, string out) {
    if (idx >= str.size()) {
        cout << out << '\n';
        return;
    }

    // exclude
    string_wala(idx + 1, str, out);

    // include
    out.push_back(str[idx]);
    string_wala(idx + 1, str, out);
}

void array_wala(const int& idx, const int& n, const vector<int>& arr, vector<int> out) {
    if (idx >= n) {
        for (auto& e : out) cout << e << ' ';
        cout << '\n';
        return;
    }

    array_wala(idx + 1, n, arr, out);

    out.push_back(arr[idx]);
    array_wala(idx + 1, n, arr, out);
}

void solve(const vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cout << arr[j] << " ";
            }
        }
        cout << '\n';
    }
}

int main() {
    string str = "ABCD";
    string_wala(0, str, "");
    cout << '\n';

    vector<int> arr = {4, 5, 6, 7};
    vector<int> out;
    array_wala(0, 4, arr, out);

    cout << '\n';
    solve(arr);

    return 0;
}