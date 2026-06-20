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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode* ptr = head;
        int count = 1;
        while(ptr->next!=nullptr){
            ptr = ptr->next;
            count++;
        }
        ptr->next = head;
    
        k = k%count;
        
        ptr = head;
        for(int i=1; i<count-k; i++){
            ptr = ptr->next;
        }
        ListNode* newHead = ptr->next;
        ptr->next =  nullptr;
        return newHead;
    }
};
