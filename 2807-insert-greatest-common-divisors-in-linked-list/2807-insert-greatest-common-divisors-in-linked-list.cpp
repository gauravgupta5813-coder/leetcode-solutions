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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ptr = head;

        while(ptr != nullptr && ptr->next!=nullptr){
            int g = gcd(ptr->val, ptr->next->val);
            ListNode* a = new ListNode(g);
            
            a->next = ptr->next;
            ptr->next = a;

            ptr = a->next;
        }
        return head;
    }
};