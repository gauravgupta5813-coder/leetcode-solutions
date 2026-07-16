class Solution {
public:
    long long gcdSum(const vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int max_val = 0;

        for(int i=0; i<n; i++){
            max_val = max(nums[i],max_val);
            prefixGcd[i] = gcd(nums[i], max_val);
        }

        sort(prefixGcd.begin(), prefixGcd.end());
        int x = 0;
        int y = n-1;
        long long sum = 0;
        while(x<y){
            sum += gcd(prefixGcd[x++], prefixGcd[y--]);
        }
        return sum;
    }
};