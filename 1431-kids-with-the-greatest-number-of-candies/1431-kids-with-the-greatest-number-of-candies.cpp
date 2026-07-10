class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n, false);
        int max_c = 0;

        for(int i=0; i<n; i++){
            max_c = max(max_c, candies[i]);
        }

        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies >= max_c){
                result[i] = true;
            }
        }
        return result;
    }
};