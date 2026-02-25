/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode ptr;
    ptr.next = head;

    struct ListNode *prev = &ptr;
    struct ListNode *curr = head;

    while(curr!=NULL){
        if(curr->val==val){
           prev->next = curr->next;
        }
        else{
            prev = curr;
        }
        curr = curr->next;
    }
    
    return ptr.next;
}
