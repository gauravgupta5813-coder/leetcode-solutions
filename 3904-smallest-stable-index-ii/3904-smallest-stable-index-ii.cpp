class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> max_num;
        vector<int> min_num;
        int n = nums.size();

        int max_val = nums[0];
        for(int i=0; i<n; i++){
            max_val = max(max_val, nums[i]);
            max_num.push_back(max_val);
        }

        int min_val = nums[n-1];
        for(int i=n-1; i>=0; i--){
            min_val = min(min_val, nums[i]);
            min_num.push_back(min_val);
        }

        for(int i=0; i<n; i++){
            if(max_num[i]-min_num[n-i-1] <= k){
                return i;
            }
        }
        return -1;
    }
};