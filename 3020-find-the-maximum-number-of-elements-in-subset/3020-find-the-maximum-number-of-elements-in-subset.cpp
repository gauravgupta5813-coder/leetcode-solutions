class Solution {
public:
    int maximumLength(vector<int>& nums){
        unordered_map<long long, int> freq;
        for(int num: nums){
            freq[num]++;
        }

        int max_len = 0;

        if(freq.count(1)){
            int count1 = freq[1];
            if(count1%2==0){
                max_len = count1-1;
            } else {
                max_len = count1;
            }
        }

        for(auto& [val, count] : freq){
            if(val == 1) continue;

            int curr_len = 0;
            long long x = val;

            while(freq.count(x) && freq[x] >= 2){
                curr_len += 2;
                x = x*x;
            }
            if(freq.count(x) && freq[x]>=1){
                curr_len += 1;
            } else {
                curr_len -= 1;
            }

            max_len = max(max_len, curr_len);
        }
        return max_len;
    }
};