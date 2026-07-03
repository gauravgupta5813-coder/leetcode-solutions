class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;

        for(int i=0; i<nums.size(); i++){
            int j = abs(nums[i])-1;

            if(nums[j]<0){
                duplicates.push_back(j+1);
            } else nums[j] = -nums[j];
        }
        return duplicates;
    }
};