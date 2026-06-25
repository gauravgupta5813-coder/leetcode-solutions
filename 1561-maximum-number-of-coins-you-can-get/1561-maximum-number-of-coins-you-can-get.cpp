class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int x = piles.size();
        int sum = 0;
        
        for(int i = x-2; i>= x/3 ; i-=2){
            sum += piles[i];
        }
        return sum;
    }
};