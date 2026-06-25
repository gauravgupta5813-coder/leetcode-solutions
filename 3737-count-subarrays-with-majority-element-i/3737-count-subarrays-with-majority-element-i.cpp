class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int subarray_count = 0;
        for(int i=0; i<nums.size(); i++){
            int target_count = 0;
            for(int j=i; j<nums.size(); j++){
                if(nums[j]==target){
                    target_count++;
                }
                int subarray_length = j-i+1;

                if(2 * target_count > subarray_length){
                    subarray_count++;
                }
            }
        }
        return subarray_count;
    }
};