#include <iostream>
#include <vector>
using namespace std;

#if 0
// array merger
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int left = 0;
    int right = 0;
    int k = 0;
    vector<int> ans(m + n, 0);

    while (left < m && right < n) {
        if (nums1[left] <= nums2[right])
            nums1[k++] = nums1[left++];
        else
            nums1[k++] = nums2[right++];
    }

    while (left < m)
        nums1[k++] = nums1[left++];
    while (right < n)
        nums1[k++] = nums2[right++];
    nums1 = ans;
}
#endif

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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* ans = nullptr;
    vector<int> arr;

    while (list1 != nullptr && list2 != nullptr) {
        auto val1 = list1->val;
        auto val2 = list2->val;

        if (val1 <= val2) {
            arr.push_back(val1);
            list1 = list1->next;
        } else {
            arr.push_back(val2);
            list2 = list2->next;
        }
    }

    while (list1 != nullptr) {
        arr.push_back(list1->val);
        list1 = list1->next;
    }
    while (list2 != nullptr) {
        arr.push_back(list2->val);
        list2 = list2->next;
    }
    for (int i = arr.size() - 1; i >= 0; --i) ans = insert(ans, arr[i]);
    return ans;
}

int main() {
    return 0;
}