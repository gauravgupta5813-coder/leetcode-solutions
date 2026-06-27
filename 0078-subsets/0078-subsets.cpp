class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});

        for(int num: nums){
            int curr_size = ans.size();

            for(int i=0; i<curr_size; i++){
                vector<int> new_subset = ans[i];
                new_subset.push_back(num);
                ans.push_back(new_subset);
            }
        }
        return ans;
    }
};