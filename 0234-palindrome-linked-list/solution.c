/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#define MAX 100000
bool isPalindrome(struct ListNode* head) {
    struct ListNode* ptr = head;
    int stack[MAX];
    int top = -1;

    while(ptr!=NULL){
        top++;
        stack[top] = ptr->val;
        ptr = ptr->next;
    }
    int flag = 1;
    ptr = head;
    while(ptr!=NULL){
        if(ptr->val != stack[top--]){
            flag = 0;
            break;
        }
        ptr = ptr->next;
    }
    if(flag) return true;
    return false;
}
