class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        int m = costs.size();
        vector<int> dp(n+1,INT_MAX);
        dp[0] = 0;

        for(int i=0; i<n; i++){
            if (dp[i] == INT_MAX) continue;
            for(int j=i+1; j<=min(n,i+3); j++){
                long long curr_jump_cost = dp[i] + costs[j-1] + (long long)(j-i)*(j-i);

                dp[j] = min((long long)dp[j], curr_jump_cost);
            }
        }
        return dp[n];
    }
};