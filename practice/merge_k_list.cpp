#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* insert(ListNode* root, const int& val) {
    if (root == nullptr) {
        root = new ListNode(val);
        return root;
    } else {
        auto new_node = new ListNode(val);
        new_node->next = root;
        root = new_node;
        return root;
    }
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
    ListNode* ans = nullptr;
    priority_queue<int, vector<int>, less<int>> max_heap;

    for (auto& ls : lists) {
        while (ls != nullptr) {
            max_heap.push(ls->val);
            ls = ls->next;
        }
    }

    while (max_heap.size()) {
        ans = insert(ans, max_heap.top());
        max_heap.pop();
    }

    return ans;
}

int main() {
    return 0;
}