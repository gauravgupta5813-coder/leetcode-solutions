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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ptr = list1;
        ListNode* ptr2 = list2;
        ListNode* x = nullptr;

        if (a == 1) {
            x = list1;
        }
        
        for(int i=0; i<b; i++){
            ptr = ptr->next;
            if(i==a-2) {
                x = ptr;
            }
        }
        x->next = list2;
        while(ptr2->next != nullptr){
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr->next;
        return list1;
    }
};