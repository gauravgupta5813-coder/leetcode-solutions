class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;

        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=i+1; j<n; j++){
                if(nums[i]%2==0){
                    if(nums[j]%2!=0){
                        count++;
                    }
                }
                else {
                    if(nums[j]%2==0){
                        count++;
                    }
                }
            }
            arr.push_back(count);
        }
        return arr;
    }
};