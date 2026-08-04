class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> freqCount;

        for(int x: nums){
            freq[x]++;
        }
        for(auto& p : freq){
            freqCount[p.second]++;
        }
        for(int i : nums){
            if(freqCount[freq[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};