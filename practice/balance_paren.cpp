#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    bool ans = true;
    stack<char> st;

    for (auto& e : s) {
        if (e == '(' || e == '{' || e == '[') {
            st.push(e);
        } else {
            if (st.empty()) {
                ans = false;
                break;
            } else {
                auto top_elem = st.top();
                if (e == ')') {
                    if (top_elem == '(')
                        st.pop();
                    else
                        break;
                } else if (e == '}') {
                    if (top_elem == '{')
                        st.pop();
                    else
                        break;
                } else if (e == ']') {
                    if (top_elem == '[')
                        st.pop();
                    else
                        break;
                }
            }
        }
    }

    if (st.size()) return false;
    return ans;
}

int main() {
    return 0;
}