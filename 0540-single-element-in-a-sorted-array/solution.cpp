class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int max_val = 0;
        for(int i=0; i<nums.size(); i++){
            max_val = max(max_val, nums[i]);
        }
        vector<int> freq(max_val + 1, 0);

        for(int num: nums){
            freq[num]++;
        }
        for(int i=0; i<freq.size(); i++){
            if(freq[i]==1){
                return i;
            }
        }
        return 0;
    }
};
