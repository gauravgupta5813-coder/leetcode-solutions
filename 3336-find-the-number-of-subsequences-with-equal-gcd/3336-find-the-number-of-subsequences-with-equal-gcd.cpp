class Solution {
public:
    int subsequencePairCount(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        const int MAX_GCD = 200;

        vector<vector<int>> dp(MAX_GCD + 1, vector<int>(MAX_GCD + 1, 0));
        dp[0][0] = 1;

        for(int x: nums){
            vector<vector<int>> next_dp = dp;

            for(int g1 = 0; g1<=MAX_GCD; g1++){
                for(int g2 = 0; g2 <= MAX_GCD; g2++){
                    if(dp[g1][g2]==0) continue;

                    long long curr_ways = dp[g1][g2];

                    int n1 = (g1==0)? x : gcd(g1,x);
                    next_dp[n1][g2] = (next_dp[n1][g2] + curr_ways)%MOD;

                    int n2 = (g2==0)? x : gcd(g2,x);
                    next_dp[g1][n2] = (next_dp[g1][n2] + curr_ways)%MOD;

                }
            }
            dp = move(next_dp);
        }

        long long ans = 0;
        for(int i=1; i<=MAX_GCD; i++){
            ans = (ans + dp[i][i]) % MOD;
        }
        return ans;
    }
};