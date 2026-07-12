class Solution {
public:
    long long minimumCost(vector<int>& nums, long long k) {
        int n = nums.size();
        long long x = k;
        long long j=0;
        long long cost = 0;
        long long MOD = 1e9 + 7;

        for(int i=0; i<n; i++){
            if(x<nums[i]){
                long long deficit = nums[i] - x;
                long long ops_needed = (deficit + k - 1) / k; 
                
                long long term1 = ops_needed;
                long long term2 = (2 * j + 1 + ops_needed);
                
                if (term1 % 2 == 0) {
                    term1 /= 2;
                } else {
                    term2 /= 2;
                }
                
                term1 %= MOD;
                term2 %= MOD;
                
                long long current_cost = (term1 * term2) % MOD;
                cost = (cost + current_cost) % MOD;
                
                j += ops_needed;
                x += ops_needed * k;
            }
            x-=nums[i];
        }
        return cost;
    }
};