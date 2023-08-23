#include <cstring>
#include <iostream>
using namespace std;

void reverseStr(char* str, int start, int end) {
    if (start > end)
        return;
    else {
        swap(str[start], str[end]);
        reverseStr(str, start + 1, end - 1);
    }
}

void reverse_str(string& str, int start, int end) {
    if (start > end)
        return;
    else {
        swap(str[start], str[end]);
        reverse_str(str, start + 1, end - 1);
    }
}

int main() {
    char str1[] = "google";
    cout << str1 << '\t';
    reverseStr((char*)str1, 0, strlen(str1) - 1);
    cout << str1 << '\t';

    cout << '\n';
    string str2 = "cooler";
    cout << str2 << '\t';
    reverse_str(str2, 0, str2.size() - 1);
    cout << str2 << '\t';

    return 0;
}