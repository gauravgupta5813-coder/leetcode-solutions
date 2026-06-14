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
    int pairSum(ListNode* head) {
        ListNode* ptr = head;
        vector<int> arr;
        
        while(ptr!=nullptr){
            arr.push_back(ptr->val);
            ptr = ptr->next;
        }
        int sum;
        int ans = 0;
        for(int i=0; i<=(arr.size()/2)-1; i++){
            sum = arr[i] + arr[arr.size()-1-i];
            ans = max(ans,sum);
        }
        return ans;
    }
};
