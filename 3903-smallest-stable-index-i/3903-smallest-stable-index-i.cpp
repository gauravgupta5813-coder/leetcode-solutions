class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int min_val = INT_MAX;
        int max_val = INT_MIN;

        for(int i=0; i<n; i++){
            max_val = max(max_val, nums[i]);
            min_val = nums[i];
            for(int j=i; j<n; j++){
                min_val = min(min_val, nums[j]);
            }
            if((max_val - min_val)<= k){
                return i;
            }
        }
        return -1;
    }
};