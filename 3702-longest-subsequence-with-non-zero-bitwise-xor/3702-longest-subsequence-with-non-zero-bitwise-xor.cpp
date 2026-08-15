class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int Xor = nums[0];
        int flag = 0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                flag = 1;
            }
        }
        if(flag == 0) return 0;
        
        for(int i=1; i<n; i++){
            Xor ^= nums[i];
        }
        if(Xor == 0) return n-1;
        else return n;
    }
};