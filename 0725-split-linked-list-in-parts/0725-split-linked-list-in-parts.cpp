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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;

        while(curr != nullptr){
            count++;
            curr = curr->next;
        }
        
        int base_size = count/k;
        int extra = count%k;
        vector<ListNode*> result(k, nullptr);
        curr = head;

        for(int i=0; i<k && curr!=nullptr; i++){
            result[i] = curr;

            int curr_part_size = base_size + (i<extra? 1 : 0);

            for(int j=0; j<curr_part_size-1; j++){
                curr = curr->next;
            }
            ListNode* next_part = curr->next;
            curr->next = nullptr;
            curr = next_part;
        }
        return result;
    }
};