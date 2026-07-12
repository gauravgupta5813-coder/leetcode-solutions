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
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr!=nullptr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        if(!head || !head->next) return head;

        head = reverse(head);

        ListNode* curr = head;
        int max = curr->val;

        while(curr!=nullptr && curr->next!=nullptr){
            if(curr->next->val<max){
                curr->next = curr->next->next;
            }
            else {
                curr = curr->next;
                max = curr->val;
            }
        }
        return reverse(head);
    }
};