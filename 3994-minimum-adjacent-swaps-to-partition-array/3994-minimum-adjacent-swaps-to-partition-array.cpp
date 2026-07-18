class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long MOD = 1e9 + 7;
        long long swaps = 0;
        long long count1 = 0;
        long long count2 = 0;

        for(int num: nums){
            if(num < a){
                swaps = (swaps + count1 + count2)%MOD;
            }
            else if(num >= a && num <=b){
                swaps = (swaps + count2)%MOD;
                count1++;
            }
            else count2++;
        }
        return swaps;
    }
};