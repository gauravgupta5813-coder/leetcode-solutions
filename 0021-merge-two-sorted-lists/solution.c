/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* createNode(int val){
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val = val;
    newnode->next = NULL;
    return newnode;
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL && list2 == NULL) return NULL;

    struct ListNode* list3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* ptr  = list3;
    list3->next =  NULL;
    while(list1!=NULL && list2 != NULL){
        if(list1->val <= list2->val){
           ptr->next = createNode(list1->val);
           list1 = list1->next;
        }
        else {
            ptr->next = createNode(list2->val);
            list2 = list2->next;
        }
        ptr = ptr->next;
    }
    while(list1 != NULL){

        ptr->next = createNode(list1->val);
        ptr = ptr->next;
        list1 = list1->next;
    }

    while(list2 != NULL){

        ptr->next = createNode(list2->val);
        ptr = ptr->next;
        list2 = list2->next;
    }

    return list3->next;
}
