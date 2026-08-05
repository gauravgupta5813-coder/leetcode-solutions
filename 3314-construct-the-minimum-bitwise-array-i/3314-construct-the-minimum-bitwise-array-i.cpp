class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        
        for(int num: nums){
            int val = -1;
            for(int x=0; x<num; x++){
                if((x|(x+1))==num){
                    val = x;
                    break;
                }
            }
            ans.push_back(val);
        }
        return ans;
    }
};