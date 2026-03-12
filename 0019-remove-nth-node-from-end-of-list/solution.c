/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *ptr = head;
    struct ListNode *temp;
    
    int count = 0;
    while(ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    if(count == n){
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    ptr = head;
    for(int i=1; i<count-n; i++){
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);
    return head;
}
