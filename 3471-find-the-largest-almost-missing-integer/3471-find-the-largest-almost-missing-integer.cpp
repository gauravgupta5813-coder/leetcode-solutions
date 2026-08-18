class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> subarray_count;
        
        for(int i=0; i<= n-k; i++){
            unordered_set<int> unique_in_sub(nums.begin()+i, nums.begin()+i + k);
            for(int val: unique_in_sub){
                subarray_count[val]++;
            }
        }
        int ans = -1;

        for(const auto& [val,count] : subarray_count){
            if(count == 1){
                ans = max(ans, val);
            }
        }
        return ans;
    }
};