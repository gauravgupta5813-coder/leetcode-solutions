class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> ans;
        int min_cost = 100;
        for(int i=0; i<n; i++){
            min_cost = min(min_cost, cost[i]);
            ans.push_back(min_cost);
        }
        return ans;
    }
};