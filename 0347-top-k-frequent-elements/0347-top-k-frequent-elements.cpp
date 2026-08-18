class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }
        
        vector<vector<int>> buckets(n+1);
        for (const auto& [num, count] : freq) {
            buckets[count].push_back(num);
        }

        vector<int> ans;
        for(int i=n; i>=1 && ans.size()<k; i--){
            for(int num: buckets[i]){
                ans.push_back(num);
            }
            if(ans.size()==k) break;
        }
        return ans;
    }
};