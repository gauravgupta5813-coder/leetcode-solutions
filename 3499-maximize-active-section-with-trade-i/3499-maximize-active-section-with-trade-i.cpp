class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int initial_ones = 0;

        for(char c: s){
            if(c == '1') initial_ones++;
        }

        string t = "1" + s + "1";
        vector<int> ones_len;
        vector<int> zeros_len;

        int n = t.length();
        int i=0;

        while(i<n){
            int count_ones = 0;
            while(i < n && t[i]=='1'){
                count_ones++;
                i++;
            }
            ones_len.push_back(count_ones);
            if(i>=n) break;

            int count_zeros = 0;
            while(i<n && t[i]=='0'){
                count_zeros++;
                i++;
            }
            zeros_len.push_back(count_zeros);
        }

        int max_delta = 0;
        for(int idx = 1; idx < ones_len.size()-1; idx++){
            int gain = zeros_len[idx-1] + zeros_len[idx];
            max_delta = max(max_delta, gain);
        }
        return initial_ones + max_delta;
    }
};