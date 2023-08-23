#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode* insert(ListNode* root, const int& val) {
        if (root == nullptr) {
            root = new ListNode(val);
            return root;
        }

        auto new_node = new ListNode(val);
        new_node->next = root;
        root = new_node;
        return root;
    }

    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* ans = nullptr;

        while (head != nullptr) {
            auto val = head->val;
            head = head->next;
            ans = insert(ans, val);
        }
        return ans;
    }
};

int main() {
    return 0;
}