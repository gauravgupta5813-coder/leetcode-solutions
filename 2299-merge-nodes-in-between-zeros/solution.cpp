/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* sumNodes(ListNode* ptr) {
        if (ptr == nullptr || ptr->next == nullptr)
            return nullptr;

        int sum = 0;

        while (ptr->val != 0) {
            sum += ptr->val;
            ptr = ptr->next;
        }

        ListNode* node = new ListNode(sum);
        node->next = sumNodes(ptr->next);

        return node;
    }

    ListNode* mergeNodes(ListNode* head) {
        return sumNodes(head->next);
    }
};
