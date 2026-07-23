class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n = nums.size();
        vector<int> indices;

        for(int i=0; i<n; i++){
            if(nums[i] == x){
                indices.push_back(i);
            } 
        }
        vector<int> ans;
        ans.reserve(queries.size());
        
        for(int i=0; i<queries.size(); i++){
            if(queries[i]<=indices.size()){
                ans.push_back(indices[queries[i]-1]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};