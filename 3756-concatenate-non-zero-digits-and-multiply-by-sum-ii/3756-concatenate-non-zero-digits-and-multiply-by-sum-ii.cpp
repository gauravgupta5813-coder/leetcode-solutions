class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        long long MOD = 1e9 + 7;
        int n = s.size();

        vector<long long> pow10(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            pow10[i] = (pow10[i - 1] * 10) % MOD;
        }

        vector<long long> prefix_sum(n+1, 0);
        vector<long long> prefix_val(n+1, 0);
        vector<int> cnt(n+1,0);

        for(int i=0; i<n; i++){
            int digit = s[i] - '0';

            prefix_sum[i+1] = prefix_sum[i] + digit;
            cnt[i+1] = cnt[i] + (digit !=0? 1:0);
            
            if(digit!=0){
                prefix_val[i+1] = (prefix_val[i]*10 + digit)%MOD;
            } else {
                prefix_val[i+1] = prefix_val[i];
            }
        }
        vector<int> result;
        result.reserve(queries.size());

        for(int i=0; i<queries.size(); i++){
            int l = queries[i][0];
            int r = queries[i][1];

            long long curr_sum = prefix_sum[r+1]-prefix_sum[l];

            int k = cnt[r+1] - cnt[l];

            long long subtracted_part = (prefix_val[l] * pow10[k]) % MOD;
            long long x = (prefix_val[r+1] - subtracted_part + MOD) % MOD;

            long long ans = (x * (curr_sum % MOD)) % MOD;
            result.push_back((int)ans);
        }
        return result;
    }
};