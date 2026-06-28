class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int max_combination = 0;

        for(int bit = 0; bit <24; bit++){
            int current_bit_count = 0;

            for(int num : candidates){
                if((num & (1<<bit))!=0){
                    current_bit_count++;
                }
            }
            max_combination = max(max_combination , current_bit_count);
        }
        return max_combination;
    }
};