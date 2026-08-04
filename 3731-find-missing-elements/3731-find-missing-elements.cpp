class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n-1; i++){
            for(int curr = nums[i]+1; curr < nums[i+1]; curr++){
                ans.push_back(curr);
            }
        }
        return ans;
    }
};