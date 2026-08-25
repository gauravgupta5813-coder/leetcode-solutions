class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> freq(101,0);

        for(int x: nums){
            freq[x]++;
        }
        int y = k;
        while(y<=100){
            if(!freq[y]) return y;
            y += k;
        }
        return y;
    }
};