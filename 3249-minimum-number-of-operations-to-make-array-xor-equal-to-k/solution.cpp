class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            ans ^= nums[i];
        }
        int x=0,y=0;
        int count = 0;
        while(ans!=0 || k!=0){
            x= ans%2;
            ans/=2;
            y = k%2;
            k/=2;
            if(x!=y){
                count++;
            }
        }
        return count;
    }
};
